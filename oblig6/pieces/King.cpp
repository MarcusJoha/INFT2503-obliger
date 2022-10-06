#include "King.h"

using namespace std;

string King::type() const
{
    return color_string() + " King";
}

string King::symbol() const
{
    if (color == Color::WHITE)
        return "white king";
    else
        return "black king";
}

bool King::valid_move(int from_X, int from_y, int to_x, int to_y) const
{
    int abs_x_change = abs(from_X - to_x);
    int abs_y_change = abs(from_y - to_y);
    if ((abs_x_change == 1 && abs_x_change < 2) || (abs_y_change == 1 || abs_y_change < 2))
    {
        return true;
    }
    return false;
}
