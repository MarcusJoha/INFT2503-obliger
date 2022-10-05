#include <string>
#include <vector>

#ifndef PIECE_H
#define PIECE_H

class Piece {

public:
    enum class Color {
        WHITE,
        BLACK
    };

    Piece(Color color): color(color) { }
    virtual ~Piece() {}

    Color color;

    std::string color_string() const;

    virtual std::string type() const;

    virtual bool valid_move(int from_x, int from_y, int to_x, int to_y) const = 0;

    virtual std::string symbol() const = 0;

};

#endif