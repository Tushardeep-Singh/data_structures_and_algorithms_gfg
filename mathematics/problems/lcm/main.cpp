// lcm
#include <iostream>
using namespace std;

// a*b = lcm(a,b) * gcd(a,b)
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b); 
    }
}

int lcm(int a, int b)
{
    return ((a * b) / gcd(a, b));
}

int main()
{
    int a = 6;
    int b = 4;
    cout << lcm(a, b);
}