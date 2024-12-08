#include <iostream>

double userInput()
{
    std::cout << "Please enter a double number.\n";
    double userDouble{};
    std::cin >> userDouble;
    return userDouble;
}

char userOperand()
{
    std::cout << "Please select an operand (+ or - or * or /)";
    char selectedOperand{};
    std::cin >> selectedOperand;
    return selectedOperand;
}

int main()
{
    double x{userInput()};
    double y{userInput()};

}
