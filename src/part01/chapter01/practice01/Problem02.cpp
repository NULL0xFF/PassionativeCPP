#include <iostream>
#include <string>

int main(void)
{
    std::string name;
    std::string phone;

    std::cout << "이름: ";
    std::cin >> name;
    std::cout << "전화번호: ";
    std::cin >> phone;

    std::cout << "입력받은 이름은 " << name << "입니다.\n";
    std::cout << "입력받은 전화번호는 " << phone << "입니다." << std::endl;

    return 0;
}