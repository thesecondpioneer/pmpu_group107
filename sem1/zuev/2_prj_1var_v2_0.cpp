#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void createBitMask(vector<int>& bitMask, int num)
{
    int place = 1, index = 0;
    while (num != 0)
    {
        if (num % 2 == 1)
        {
            bitMask.resize(index + 1);
            bitMask[index] = place;
            index++;
        }
        num /= 2;
        place++;
    }
}

void printMas(vector<int>& a)
{
    cout << "{";
    for (auto const &i : a)
    {
        cout << i << ' '; 
    }
    cout << "}" << endl;
}

void printxDefference(vector<int> v1, vector<int> v2)
{
    vector<int> v3, v4, v5;

    
    set_difference(v1.begin(), v1.end(),
                   v2.begin(), v2.end(),
                   back_inserter(v3));

    set_difference(v2.begin(), v2.end(),
                   v1.begin(), v1.end(),
                   back_inserter(v4));

    set_union(v3.begin(), v3.end(),
              v4.begin(), v4.end(),
              back_inserter(v5));

    printMas(v5);
}

void printIntersection(vector<int> v1, vector<int> v2)
{
    vector<int> v3;

    set_intersection(v1.begin(), v1.end(),
                     v2.begin(), v2.end(),
                     back_inserter(v3));
    
    printMas(v3);
}

void printUnion(vector<int> v1, vector<int> v2)
{
    vector<int> v3;

    set_union(v1.begin(), v1.end(),
              v2.begin(), v2.end(),
              back_inserter(v3));

    printMas(v3);
}

void printDifference(vector<int> v1, vector<int> v2)
{
    vector<int> v3;

    set_difference(v1.begin(), v1.end(),
                   v2.begin(), v2.end(),
                   back_inserter(v3));

    printMas(v3);
}

int main() 
{
    unsigned long int x1, x2;
    cin >> x1 >> x2;
    vector<int> bitMask_x1;
    vector<int> bitMask_x2;

    createBitMask(bitMask_x1, x1);
    createBitMask(bitMask_x2, x2);

    printMas(bitMask_x1);
    printMas(bitMask_x2);
    printIntersection(bitMask_x1, bitMask_x2);
    printUnion(bitMask_x1, bitMask_x2);
    printDifference(bitMask_x1, bitMask_x2);
    printxDefference(bitMask_x1, bitMask_x2);

    return 0;
}