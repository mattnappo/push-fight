#ifndef GAME_H
#define GAME_H

#include "board.h"

namespace pf {

class Window {
public:
    Window();
    ~Window();

private:
    int init_window();
};

class Game {
public:
    Window window;
    Board board;
    
    Game();
    ~Game();

    int play();

private:
    int setup();
};

}

#endif