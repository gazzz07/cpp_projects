#include <iostream>

/*int main()
{
    double d {5.6};
    std::cout << static_cast<int>(d); //converts double (d) to an integer, will lose decimal.
    return 0;
}*/

int main() //explicit conversion (preferred)
{
    std::cout << "Enter a single character.\n";
    char singleChar {};
    std::cin >> singleChar;
    std::cout << "You entered '" << singleChar << "', which has ASCII code " << singleChar << ".\n";
}

/*int main() //implicit conversion (do not use)
{
    std::cout << "Enter a single character.\n";
    char singleChar {};
    std::cin >> singleChar;
    int ascii {singleChar};
    std::cout << "You entered '" << singleChar << "', which has ASCII code " << ascii << ".\n";
}*/
