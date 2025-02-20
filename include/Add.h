#pragma once
#include <iostream>
#include <string>

class Add{

    public:
    Add(int a, int b);
    ~Add();

    void Run();

    private:
    int m_a;
    int m_b;

};