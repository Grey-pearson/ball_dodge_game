#include <SFML/Graphics.hpp>
#include "sort.h"

class Screen()
{
    sf::RenderWindow window(sf::VideoMode(1000, 400), "SFML works!");
    // sf::CircleShape shape(100.f);
    // shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        // window.draw(shape);
        window.display();
    }
};

int main()
{

    return 0;
}