#include <iostream>

int main()
{
    char quotedLetter { 'a' };
    char unquotedNumber {97};

    std::cout << "This is printed with single quotes: " << quotedLetter << "\nThis number (without quotes) prints the same char: " << unquotedNumber << "\n";
}
