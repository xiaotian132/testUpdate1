#include "Add.h"

Add::Add(int a, int b)
{
    this->m_a = a;
    this->m_b = b;
}

Add::~Add()
{
}

void Add::Run()
{
    int res = this->m_a + this->m_b;

    std::cout << "Res = " << res << std::endl;
}
