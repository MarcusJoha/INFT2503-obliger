#include "Knight.hpp"

using namespace std;

string Knight::type() const
{
    return color_string() + " knight";
}

bool Knight::valid_move(int from_x, int from_y, int to_x, int to_y) const
{
    int abs_x_change = abs(from_x - to_x);
    int abs_y_change = abs(from_y - to_y);

    if (abs_x_change == 1 && abs_y_change == 2)
        return true;
    if (abs_x_change == 2 && abs_y_change == 1)
        return true;

    return false;
}

string Knight::type() const
{
    string color_text = (color == Color::WHITE) ? "white" : "black";
    return color_text + " Knight";
}