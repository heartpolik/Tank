//
// Created by Polik on 11.03.2016.
//

#ifndef TANKS_TANK_H
#define TANKS_TANK_H


class tank
{
public:
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

    eDirection dir;

public:



    void init();
    void change_dir(eDirection aDir);
    void change_pos(int aX, int aY);
    void get_hit();
    void t_draw();


};


#endif //TANKS_TANK_H
