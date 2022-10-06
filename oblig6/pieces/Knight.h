#pragma once
#include "Piece.h"

using namespace std;

#ifndef KNIGHT_H
#define KNIGHT_H

class Knight: public Piece {
public:
    explicit Knight(Color color): Piece(color) {}
    
    [[nodiscard]] string type() const override;
    [[nodiscard]] bool valid_move(int from_x, int from_y, int to_x, int to_y) const override;
    [[nodiscard]] string symbol() const override;

};

#endif
