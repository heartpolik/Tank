#include <iostream>

using namespace std;





class tank
{
private:
    int x=0;
    int y=0;

    int live=5;

    eDirection dir=UP;

public:

    enum eDirection
    {
        LEFT =0,
        RIGHT,
        UP,
        DOWN
    };

    void change_dir(eDirection aDir)
    {
        dir=aDir;
    }

    void change_pos(int aX, int aY)
    {
        x=aX;
        y=aY;
    }

};


int main() {
    cout << "Hello, World!" << endl;
    return 0;
}