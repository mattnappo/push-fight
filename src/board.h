#ifndef BOARD_H
#define BOARD_H

namespace pf {

enum piece_color {
    BLACK,
    WHITE
};

enum piece_type {
    PUSHER,
    PAWN
};

class Piece {
public:
    Piece(piece_color color, piece_type type, int x, int y);
    
    int get_x();
    int get_y();

    piece_color get_color();
    piece_type get_type();

    bool is_anchored();

private:
    int x;
    int y;

    piece_color color;
    piece_type type;

    bool is_anchored;
};

class Square {
public:
    Square(int x, int y);

    int get_x();
    int get_y();

    bool is_vacant();

    Piece *get_piece();
    int set_piece(Piece *piece);

private:
    Piece *piece;

    int x;
    int y;

    bool is_vacant;
};

class Board {
public:
    Square board[8][4];

    Board();
    ~Board();

    int move_piece();
};

}

#endif