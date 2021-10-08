#include <iostream>
#include <cmath>

bool minDoubleCheck(int a, int b, int c)
{
    return 0;
}

bool pythagorasCheck(int a, int b, int c)
{
    return (
        pow(a, 2) + pow(b, 2) == pow(c, 2) ||
        pow(b, 2) + pow(c, 2) == pow(a, 2) ||
        pow(a, 2) + pow(c, 2) == pow(b, 2)
         
    );
}

bool doubleCheck(int a, int b, int c)
{
    return (
        pow(a, 2) + pow(b, 2) < 1.7976931348623158e308 &&
        pow(b, 2) + pow(c, 2) < 1.7976931348623158e308 &&
        pow(a, 2) + pow(c, 2) < 1.7976931348623158e308);
}

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    if (pythagorasCheck(a, b, c) &&
        pow(a, 2) > 0 && pow(b, 2) > 0 && pow(c, 2) > 0 && 
        doubleCheck(a, b, c))
    {
        std::cout << "yes" << std::endl;
    }
    else
    {
        std::cout << "not a right triangle or too large (small) values entered" << std::endl;
    }
}