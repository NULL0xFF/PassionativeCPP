#include <iostream>

int main(void)
{
    int number;

    std::cout << "숫자를 입력하세요: ";
    std::cin >> number;

    for (int multiLoop = 1; multiLoop <= 9; multiLoop++)
        std::cout << number << " × " << multiLoop << " = " << (number * multiLoop) << std::endl;

    return 0;
}