
#pragma once

#include <iostream>

using namespace std;

class Location
{
public:
    Location();
    string Dungeon1[10][10];
    int* x;
    int* y;
    template <size_t rows, size_t columns>
    void ShowMap(string (&location)[rows][columns]);
};

template <size_t rows, size_t columns>
void Location::ShowMap(string (&location)[rows][columns])
{
    for(int y = 0; y < columns; y++)
    {
        for(int x = 0; x < rows; x++)
            cout << location[x][y];
        cout << endl;
    }
}
