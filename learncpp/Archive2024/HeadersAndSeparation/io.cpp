#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Please enter a number: \n";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int x, int y, int z)
{
    std::cout << x << " + " << y << " + " << z << " = " << x + y + z << ".\n";
}
