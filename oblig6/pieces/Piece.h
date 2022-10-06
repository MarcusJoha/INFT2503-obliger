#pragma once

#include <string>

#ifndef PIECE_H
#define PIECE_H

using namespace std;

class Piece {

public:
    enum class Color {
        WHITE,
        BLACK
    };

    explicit Piece(Color color): color(color) {}
    virtual ~Piece() = default;

    Color color;

    [[nodiscard]] string color_string() const;

    [[nodiscard]] virtual string type() const = 0;

    [[nodiscard]] virtual bool valid_move(int from_x, int from_y, int to_x, int to_y) const = 0;

    [[nodiscard]] virtual string symbol() const = 0;

};

#endif
