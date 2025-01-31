#include <iostream>

int getNumberFromUser()
{
    std::cout << "Enter a number:\n";
    int userInput{};
    std::cin >> userInput;
    return userInput;
}

int main()
{
    int userNum{getNumberFromUser()};
    std::cout << userNum << " doubled is " << userNum * 2 << ".\n";

    int userNum2{getNumberFromUser()};
    int userNum3{getNumberFromUser()};

    std::cout << userNum2 << " + " << userNum3 << " = " << userNum2 + userNum3 << ".\n";
    return 0;
}
