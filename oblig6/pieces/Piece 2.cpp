#include "Piece.h"

using namespace std;

string Piece::color_string() const
{
    if (color == Color::WHITE)
        return "white";
    else
        return "black";
}
