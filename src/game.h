#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <SFML/Graphics.hpp>

#include "board.h"

namespace pf {

class Window {
public:
    Window();
    ~Window();

    sf::RenderWindow window;

private:
    int height = 305, width = 533;
};

class Game {
public:
    Window window;
    Board board;
    
    Game();
    ~Game();

    int play();

private:
    int setup_board();
};

}

#endif