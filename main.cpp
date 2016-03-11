#include <iostream>
#include "tank.h"
#include <stdio.h>

#include "win_console.h"


using namespace std;

//global size of gaming world
//int gX = 9;
//int gY = 9;


int main() {

    console_init();

    tank pTank;

    pTank.init();

    pTank.change_dir(tank::RIGHT);

    while(1)
    {
        system("cls");
        pTank.t_draw();
        Sleep(33);

    }




//
//    pTank[1].t_draw();
//    cout << "Hello, World!" << endl;
    return 0;
}