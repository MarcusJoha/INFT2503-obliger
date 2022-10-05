#include <iostream>
#include "Chessboard.hpp"
#include "pieces/King.hpp"
#include "pieces/Knight.hpp"

using namespace std;


    friend ostream &operator<<(ostream &os, const ChessBoard &chess_board) {
        for (int row = 7; row >= 0; row--) {
            os << to_string(row + 1) << " ";
            for (int col = 0; col < 8; col++) {
                auto &piece = chess_board.squares[col][row];
                os << (piece ? piece->text_desc() + " " : "- ");
            }
            os << "\n";
        }
        os << "a b c d e f g h";
        return os;
    }
};

int main() {
    ChessBoard board;

    board.squares[4][0] = make_unique<King>(Piece::Color::WHITE);
    board.squares[1][0] = make_unique<Knight>(Piece::Color::WHITE);
    board.squares[6][0] = make_unique<Knight>(Piece::Color::WHITE);

    board.squares[4][7] = make_unique<King>(Piece::Color::BLACK);
    board.squares[1][7] = make_unique<Knight>(Piece::Color::BLACK);
    board.squares[6][7] = make_unique<Knight>(Piece::Color::BLACK);

    cout << "Invalid moves:" << endl;
    board.move_piece("e3", "e2");
    board.move_piece("e1", "e3");
    board.move_piece("b1", "b2");
    cout << endl;

    cout << "A simulated game:" << endl;
    cout << board << endl;
    board.move_piece("e1", "e2");
    cout << board << endl;
    board.move_piece("g8", "h6");
    cout << board << endl;
    board.move_piece("b1", "c3");
    cout << board << endl;
    board.move_piece("h6", "g8");
    cout << board << endl;
    board.move_piece("c3", "d5");
    cout << board << endl;
    board.move_piece("g8", "h6");
    cout << board << endl;
    board.move_piece("d5", "f6");
    cout << board << endl;
    board.move_piece("h6", "g8");
    cout << board << endl;
    board.move_piece("f6", "e8");
}
