#include <iostream>
#include "tank.h"
#include <stdio.h>

#include "win_console.h"


using namespace std;

//global size of gaming world
//int gX = 9;
//int gY = 9;


int main()
{

    console_init();

    eCKeyKode keyInput;

    tank pTank;

    pTank.init();
    pTank.t_draw();

    bool movFlag;

    while(1)
    {



        keyInput = wait_console_key_press();

        switch(keyInput)
        {
            case KEY_UP:
            {
                movFlag=pTank.change_dir(tank::UP);
                break;
            }
            case KEY_LEFT:
            {
                movFlag=pTank.change_dir(tank::LEFT);
                break;
            }
            case KEY_RIGHT:
            {
                movFlag=pTank.change_dir(tank::RIGHT);
                break;
            }
            case KEY_DOWN:
            {
                movFlag=pTank.change_dir(tank::DOWN);
                break;
            }
            case KEY_ESCAPE:
            {

                break;
            }
            case KEY_ENTER:
            case UNKNOWN:
                break;
        }

        system("cls");
        if (movFlag) pTank.move();
        pTank.t_draw();
        Sleep(33);
        if (keyInput==KEY_ESCAPE) break;
    };

    return 0;
}