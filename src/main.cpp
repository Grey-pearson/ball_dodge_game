#include <SFML/Graphics.hpp>
#include "sort.h"

#include <iostream>
using namespace std;
Sort arr_sort;

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
    int num;
    cout << "how many pillars do you want sorted?";
    cin >> num;
    cout << endl;
    arr_sort.num_of_pillars = num;
    cout << arr_sort.num_of_pillars << endl;
    // cout << arr_sort.pillars << endl;
    // cout << arr_sort.scrable_pillars() << endl;

    return 0;
}