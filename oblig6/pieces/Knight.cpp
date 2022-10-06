#include "Knight.h"

using namespace std;

string Knight::type() const
{
    return color_string() + " knight";
}

string Knight::symbol() const
{
    if (color == Color::WHITE)
        return "white Knight";
    
    else
        return "Black Knight";
}

bool Knight::valid_move(int from_x, int from_y, int to_x, int to_y) const

{
    int diff_x = abs(to_x - from_x), diff_y = abs(to_y - from_y);

    return (diff_x == 2 && diff_y == 1) || (diff_x == 1 || diff_y == 2);
}


/*
{
    int abs_x_change = abs(from_x - to_x);
    int abs_y_change = abs(from_y - to_y);

    if (abs_x_change == 1 && abs_y_change == 2)
        return true;
    if (abs_x_change == 2 && abs_y_change == 1)
        return true;

    return false;
}
*/
