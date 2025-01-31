#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;

    std::cout << "Enter 2 items with the same ISBN number, and different quantities: ";
    std::cin >> item1 >> item2;

    std::cout << "Output:\n" << item1 + item2 << std::endl;

    return 0;
}