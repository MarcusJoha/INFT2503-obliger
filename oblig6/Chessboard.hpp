#pragma once

#include <vector>
#include <memory>
#include <functional>
#include "pieces/Piece.hpp"


using namespace std;


class ChessBoard {

    public:
        ChessBoard();

        bool move_piece(const string &from, const string &to);

        vector<vector<unique_ptr<Piece>>> squares;

};