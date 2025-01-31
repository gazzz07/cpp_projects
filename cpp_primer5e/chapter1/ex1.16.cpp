// Program to sum a set of integers

#include <iostream>

int main()
{
	int value = 0, sum = 0;
	std::cout << "Enter numbers, separated by a space: ";
	
	while (std::cin >> value)
		sum += value;
		std::cout << "The values summed: " << sum << "\n";
	
	return 0;
			
}
