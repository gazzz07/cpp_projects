#include "add.h" //forward declaration here instead of comment (line4)
#include <iostream>

// int add(int x, int y); // forward declaration using function prototype

int main()
{
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
    return 0;
}
