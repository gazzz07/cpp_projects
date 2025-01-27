#include <iostream>

int numberDoubled(int userInput)
{
    int userInputDoubled = userInput * 2;
    return userInputDoubled;
}

int main()
{
    int userNumber{};
    std::cout << "Please enter an integer number.\n";
    std::cin >> userNumber;
    std::cout << "Your number doubled is " << numberDoubled(userNumber) << ".\n";
}
