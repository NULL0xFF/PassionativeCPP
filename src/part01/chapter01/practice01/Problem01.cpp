#include <iostream>

int main(void)
{
    int input = 0;
    int sum = 0;

    for (int inputLoop = 1; inputLoop <= 5; inputLoop++)
    {
        std::cout << inputLoop << "번째 정수 입력: ";
        std::cin >> input;
        sum = sum + input;
    }

    std::cout << "합계: " << sum << std::endl;

    return 0;
}