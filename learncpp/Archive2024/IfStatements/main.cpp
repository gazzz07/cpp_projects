#include <iostream>

int main()
{
    std::cout << "Please enter a number between 0 and 9.\n";
    int32_t x{};
    std::cin >> x;

    if (x == 2 || x == 3 || x == 5 || x == 7)
    {
        std::cout << x << " is a prime number.";
    } else
    {
        std::cout << x << " is not prime.";

        return 0;
    }
}
