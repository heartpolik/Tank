//
// Created by Polik on 11.03.2016.
//

#include <iostream>
#include "tank.h"
#include <stdio.h>
#include <Windows.h>
#include "win_console.h"

#include "windows.h"

void tank::init(){

        x=0;
        y=0;
        lives=5;
        dir=UP;
        isAlive = true;
        isMove = true;


}

bool tank::_isMoveAval()
{
    // check borders
    isMove=true;

    if(y==0 && dir==UP)     isMove = false;
    if(y==9 && dir==DOWN)  isMove = false;
    if(x==0 && dir==LEFT)   isMove = false;
    if(x==9 && dir==RIGHT) isMove = false;
}

void tank::move()
{
    tank::_isMoveAval();

    switch (dir)
    {
        case UP:
        {
            --y;
            break;
        }
        case DOWN:
        {
            ++y;
            break;
        }
        case LEFT:
        {
            --x;
            break;
        }
        case RIGHT:
        {
            ++x;
            break;
        }
    }
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
        set_position(x*6-2,y*3-1);

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
