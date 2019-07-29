#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(
        sf::VideoMode(307, 533),
        "Push Fight"
    );

    while (window.isOpen()) {

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);
    
        sf::Texture background_texture;
        if (!background_texture.loadFromFile("resources/background.png")) {
            std::cout << "error loading texture" << std::endl;        
        }

        sf::Sprite background_sprite;
        background_sprite.setTexture(background_texture);
        window.draw(background_sprite);

        window.display();
    }
    return 0;
}