#include <iostream>

int main()
{
    std::cout << "Enter an integer:\n";

    int x{};
    std::cin >> x;

    std::cout << "Double that number is " << x * 2 << ".\n";

    std::cout << "Triple " << x <<" is: " << x * 3 << ".\n";

    return 0;
}