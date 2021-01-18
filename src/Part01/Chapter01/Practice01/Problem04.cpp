#include <iostream>

int main(void)
{
    int inputNumber;

    while (true)
    {
        // Input
        std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin >> inputNumber;

        // Escape
        if (inputNumber == -1)
            break;

        // Output
        std::cout << "이번 달 급여: " << (50 + (inputNumber * 0.12)) << "만원\n";
    }

    std::cout << "프로그램을 종료합니다." << std::endl;

    return 0;
}