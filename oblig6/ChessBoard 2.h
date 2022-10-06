#pragma once

#include <vector>
#include <memory>
#include <functional>
#include "pieces/Piece.h"

#ifndef CHESSBOARD_H
#define CHESSBOARD_H

using namespace std;


class ChessBoard {

    public:
        ChessBoard();

        bool move_piece(const string &from, const string &to);
        
        vector<vector<unique_ptr<Piece>>> squares;


        function<void()> after_piece_move;
 
};

#endif
