#pragma once

#include <vector>
#include <memory>
#include <functional>


using namespace std;


class ChessBoard {

    public:
        ChessBoard();

    bool move_piece(const string &from, const string &to);

};