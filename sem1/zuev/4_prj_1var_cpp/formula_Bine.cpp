#include <iostream>
#include <cmath>

int formulaBine(int n)
{
    int fn;
    const double FI = (1 + sqrt(5)) / 2;
    const double PSI = (1 - sqrt(5)) / 2;
    
    fn = (pow(FI, n) - pow(PSI, n)) / sqrt(5);

    return fn;
}