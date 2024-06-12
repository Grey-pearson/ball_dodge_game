#include <SFML/Graphics.hpp>
#include <algorithm>
#include <iostream>
#include <random>
using namespace std;

// add in time recording method
// add multiple shorting algorithms
// figure out how to scrample randomly

class Sort
{
public:
    int num_of_pillars = 10;
    vector<int> pillars;
    for (int i = 0; i < num_of_pillars; i++)
    {
        }

    // vector<int> set_pillar_height()
    // {
    //     pass;
    // }

    vector<int> scrable_pillars()
    {
        random_device rd;
        mt19937 g(rd());

        vector<int> scrabled_pillars = pillars;
        shuffle(scrabled_pillars.begin(), scrabled_pillars.end(), g);
        // cout << scrabled_pillars << endl;
        return scrabled_pillars;
    }
};