#include <iostream>

int cycleFib(int i)
{
    int sum = 0, prev1 = 1, prev2 = 1;
    while (i - 2)
    {
        sum = prev1 + prev2;
        prev1 = prev2;
        prev2 = sum;
        i--;
    }

    return sum;
}
