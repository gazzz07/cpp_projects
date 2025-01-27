#include <iostream>

void doubledNumber()
{
    std::cout << "Enter a number:\n";
    int userNum {};
    std::cin >> userNum;

    std::cout << userNum << " doubled is " << userNum * 2 << ".\n";
}

int main()
{
    doubledNumber();
    return 0;
}
