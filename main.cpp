#include <iostream>

using namespace std;

class point
{
    void moves(int speed, int offset);

};

class tiles
{
    void lode_tiles();
    void draw();
    bool is_passable();
};
/////////////////////////////////////

class Level
{
    void load_level ();

};
/////////////////////////////////////

class avatar
{
    void lode_avt();
    bool moving ();
};
/////////////////////////////////////

int main()
{
    return 0;
}
