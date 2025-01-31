#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book1, book2, book3;
    std::cout << "Please enter book transactions: ";
    std::cin >> book1 >> book2 >> book3;

    std::cout << book1 << "\n" << book2 << "\n" << book3 << std::endl;

    return 0;
}