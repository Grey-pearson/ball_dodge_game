#include <SFML/Graphics.hpp>
#include "sort.h"

#include <iostream>
using namespace std;
Arr_sort sort;

int main()
{
    // sf::RenderWindow window(sf::VideoMode(1000, 400), "SFML works!");
    // // sf::CircleShape shape(100.f);
    // // shape.setFillColor(sf::Color::Green);

    // while (window.isOpen())
    // {
    //     sf::Event event;
    //     while (window.pollEvent(event))
    //     {
    //         if (event.type == sf::Event::Closed)
    //             window.close();
    //     }

    //     window.clear();
    //     // window.draw(shape);
    //     window.display();
    // }

    cout << "how many pillars do you want sorted?";
    cin >> sort.num_of_pillars >> endl;

    return 0;
}