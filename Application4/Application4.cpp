// Application4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int
        a = 13,
        b = 5;
    float c = 17.5;

    cout
        << a + b - c << "\n"
        << static_cast<float>(15) / 2 - c << "\n"
        << a / static_cast<double>(b) + 2 * c << "\n"
        << 14 % 3 + 6.3 + static_cast <float> (b) / a << "\n"
        << static_cast<int>(c) % 5 + a - b << "\n"
        << 13.5 / 2 + 4.0 * 3.5 + 18 << endl;

}


