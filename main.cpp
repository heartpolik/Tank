#include <iostream>
#include "tank.h"
#include <stdio.h>


using namespace std;




int main() {

    tank pTank[10];

    pTank[1].init();
    pTank[1].t_draw();

    pTank[1].change_dir(tank::RIGHT);
    pTank[1].t_draw();
    cout << "Hello, World!" << endl;
    return 0;
}