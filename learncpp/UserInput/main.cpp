#include <iostream>

int main()
{
    std::cout << "Please enter 3 numbers, separated by a space:" << "\n";

    int x{};
    int y{};
    int z{};
    std::cin >> x >> y >> z;

    std::cout << "You picked numbers " << x << " and " << y << " and " << z << ".\n";
    return 0;


   /* std::cout << "Enter a number: "; // ask user for a number
    int x{}; // define variable x to hold user input
    std::cin >> x; // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << '\n';

    return 0;
    */
}
