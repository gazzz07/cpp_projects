#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currentItem, item;
    int count = 0;
    std::cout << "Enter transactions: ";
    std::cin >> currentItem;

    if (std::cin >> currentItem)
    {
        ++count;
        while (std::cin >> item)
        {
            if (currentItem.isbn() == item.isbn())
            ++count;
            else
            {
                std::cout << currentItem.isbn() << " " << std::endl;
                currentItem = item;
                count = 1;
            }
        }
        std::cout << currentItem.isbn() << " " << std::endl;
    }

    return 0;
}