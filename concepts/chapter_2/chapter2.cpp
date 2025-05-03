#include <iostream>
#include "sum.h"

void printTest()
{
    std::cout << "print Test!";
}

int returnNumber()
{
    int number { 7 };
    
    return number;
}

int sum3(int a, int b, int c = 4)
{
    return a + b + c;
}

namespace math
{
    int print()
    {
        return 8;
    }
}

namespace util
{
    int print()
    {
        return 4;
    }
}

int main()
{
    int x { 4 };
    int y { 6 } ;
    printTest();
    std::cout
        << "\nNumber value: " << returnNumber()
        << "\nSum of " << x << " + " << y << " = " << sum3(x, y)
        << "\nFunction sum.cpp: " << sum(4, 5)
        << "\nprint in namespace math: " << math::print()
        << "\nprint in namespace util: " << util::print();

    return 0;
}
