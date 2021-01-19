#include <iostream>

namespace BestComImpl
{
    void SimpleFunc(void);
} // namespace BestComImpl
namespace BestComImpl
{
    void PrettyFunc(void);
} // namespace BestComImpl
namespace ProgComImpl
{
    void SimpleFunc(void);
} // namespace ProgComImpl

int main(void)
{
    BestComImpl::SimpleFunc();
    return 0;
}

void BestComImpl::SimpleFunc(void)
{
    std::cout << "BestCom이 정의한 함수" << std::endl;
    PrettyFunc();              // 동일한 이름공간
    ProgComImpl::SimpleFunc(); // 다른 이름공간
}
void BestComImpl::PrettyFunc(void)
{
    std::cout << "So Pretty!!" << std::endl;
}
void ProgComImpl::SimpleFunc(void)
{
    std::cout << "ProgCom이 정의한 함수" << std::endl;
}