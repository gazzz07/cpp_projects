// Loops, both for and while

#include <iostream>

/*int main()
{
	int userNum1 = 0, userNum2 = 0;
	std::cout << "Enter 2 numbers: ";
	std::cin >> userNum1 >> userNum2;
	
	if (userNum1 > userNum2)
		{
			int tempVal = userNum1;
			userNum1 = userNum2;
			userNum2 = tempVal;
		}

	while (userNum1 <= userNum2)
	{
		std::cout << userNum1 << "\n";
		++userNum1;
	}
	
	return 0;
}*/

int main()
{
	int userNum1 = 0, userNum2 = 0;
	std::cout << "Enter 2 numbers: ";
	std::cin >> userNum1 >> userNum2;
	
	for (int i = userNum1; i <= userNum2; ++i)
		{
		std::cout << i << "\n";
		}
	
	return 0;
}
