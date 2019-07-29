#include "game.h"

pf::Game::Game() {
    window = Window();
    setup_board();
}

pf::Game::~Game() { }

int pf::Game::setup_board() {

}

int pf::Game::play() {
    
    while (window.window.isOpen()) {

        sf::Event event;
        while (window.window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.window.close();
        }

        window.window.clear(sf::Color::White);
    
        sf::Texture background_texture;
        if (!background_texture.loadFromFile("resources/background.png")) {
            std::cout << "error loading texture" << std::endl;        
        }

        sf::Sprite background_sprite;
        background_sprite.setTexture(background_texture);
        window.window.draw(background_sprite);

        window.window.display();
    }

    return 0;
}