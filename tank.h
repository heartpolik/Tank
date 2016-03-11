//
// Created by Polik on 11.03.2016.
//

#ifndef TANKS_TANK_H
#define TANKS_TANK_H


class tank
{
public:

//    extern int gX,gY;
    enum eDirection
    {
        LEFT =0,
        RIGHT,
        UP,
        DOWN
    };

private:
    int x;
    int y;

    int lives;
    bool isAlive;
    bool isMove;

    eDirection dir;

    int tD; //tank dimaension from center to border

public:



    void move();
    void init();
    bool change_dir(eDirection aDir);
    void change_pos(int aX, int aY);
    void get_hit();
    void t_draw();


    void _isMoveAval();



};


#endif //TANKS_TANK_H
