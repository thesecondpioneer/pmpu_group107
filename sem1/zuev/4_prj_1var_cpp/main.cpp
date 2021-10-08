#include <iostream>
#include "cycle.h"
#include "formula_Bine.h"
#include "recursion.h"

// bool doubleCheck(int a)
// {
//     return (0 < a < 2.147483647);
// }

int main()
{
    short int input;
    long long int a, b, c;
    std::cin >> input;
    while (input > 93 || input <= 0)
    {
        std::cout << "Incorrect number, try again" << std::endl;
        std::cin >> input;
    }
    a = cycleFib(input);
    b = formulaBine(input);
    c = recFib(input);

    std::cout << a << ' ' << b << ' ' << c;

    return 0;
}