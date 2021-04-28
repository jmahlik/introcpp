#include<iostream>
#include<cmath>

using std::cout;
using std::cin;

// Thing
void power(double base, int expon) 
{
    double result = 1;
    for(int i = 0; i < expon; i++)
    {
        result = result * base;
    }
    cout << result << std::endl; 
}

// The main function
int main() 
{
    float a;
    double b;
    long double c;
    cout <<  sizeof(c) << std::endl;
    return 0;
}
