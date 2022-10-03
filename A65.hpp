#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
void swap(int& n1, int& n2, int& n3)
{
    int one = n1;
    int two = n2;
    int three = n3;
    n1 = three;
    n2 = one;
    n3 = two;
}

void swaptwo(int& n1, int& n2)
{
    int one = n1;
    n1 = n2;
    n2 = one;
}
// swaptwo() ; to swap two values (a, b) to (b, a)
