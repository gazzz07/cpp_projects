#include "io.h"
#include <iostream>

int main()
{
    int firstNum{readNumber()};
    int secondNum{readNumber()};
    int thirdNum{readNumber()};

    writeAnswer(firstNum, secondNum, thirdNum);
    return 0;
}
