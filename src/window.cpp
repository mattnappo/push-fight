#include "game.h"

pf::Window::Window() : window(
    sf::RenderWindow(
        sf::VideoMode(height, width),
        "Push Fight"
    )
)
{ }

pf::Window::~Window() { }