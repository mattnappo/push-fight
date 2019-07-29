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

    piece_color get_piece_color();
    piece_type get_piece_type();

private:
    int x;
    int y;

    piece_color color;    
    piece_type type;
};

class Square {
public:
    Square(int x, int y);

    int get_x();
    int get_y();

    bool is_vacant();
    bool is_white();

    int set_vacant();
    int set_occupied();

    int set_white();
    int set_black();

private:
    int x;
    int y;

    bool vacant;
    bool is_white;
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