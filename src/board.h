#ifndef BOARD_H
#define BOARD_H


namespace pf {

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