#include "game.h"

pf::Window::Window() : window(
    sf::VideoMode(height, width),
    "Push Fight"
)
{ }

pf::Window::~Window() { }