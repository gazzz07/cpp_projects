/* Program that prints hello world, uses the multiplication operator and rewrites a code snippet to use separate statements */

#include <iostream>

int main()
{
	std::cout << "Hello world, give me 2 numbers to multiply!" << std::endl;
	int userInput1, userInput2;
	std::cin >> userInput1;
	std::cin >> userInput2;
	std::cout << userInput1 << " * " << userInput2 << " = " << userInput1 * userInput2 << std::endl;
	
	return 0;
}
