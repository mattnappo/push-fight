#include "game.h"

pf::Window::Window() {
    sf::RenderWindow window_ = sf::RenderWindow(
        sf::VideoMode(height, width),
        "Push Fight"
    );

    window = window_;
}

pf::Window::~Window() { }