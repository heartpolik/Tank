//
// Created by Polik on 11.03.2016.
//

#include <iostream>
#include "tank.h"
#include <stdio.h>
#include <Windows.h>

void tank::init(){

        x=0;
        y=0;
        lives=5;
        dir=UP;
        isAlive= true;

}

void tank::change_pos(int aX, int aY)
{
    x=aX;
    y=aY;
}

void tank::change_dir(eDirection aDir)
{
    dir=aDir;
}

void tank::get_hit()
{
    --lives;
    if (!lives) isAlive= false;
}

void tank::t_draw()
{

    switch (dir)
    {
        case UP:
        {
            std::cout << "  ??  " << std::endl;
            std::cout << "??  ??" << std::endl;
            std::cout << "??  ??" << std::endl;

            break;
        }

        case DOWN:
        {
            std::cout << "??  ??" << std::endl;
            std::cout << "??  ??" << std::endl;
            std::cout << "  ??  " << std::endl;

            break;
        }

        case RIGHT:
        {
            std::cout << "????  " << std::endl;
            std::cout << "     ?" << std::endl;
            std::cout << "????  " << std::endl;

            break;
        }

        case LEFT:
        {
            std::cout << "????  " << std::endl;
            std::cout << "?     " << std::endl;
            std::cout << "????  " << std::endl;

            break;
        }
    }

}
