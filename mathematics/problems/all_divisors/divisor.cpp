// All divisors of a number in sorted order
// divisors appear in pairs
// one of the divisors in pairs is smaller than or equal to n^1/2
#include <iostream>
#include <cmath>
using namespace std;

// solution 1
// time complexity : theta(n)
// space complexity : theta(1)
// void divisors(int N)
// {
//     for (int i = 1; i <= N; ++i)
//     {
//         if (N % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
// }

// Solution 2
// time complexity : theta(n^1/2)
// space complexity : theta(1)
void divisors(int N)
{
    int i;
    for (i = 1; i < pow(N, 0.5); ++i)
    {
        if (N % i == 0)
        {
            cout << i << " ";
        }
    }
    for (; i >= 1; i--)
    {
        if (N % i == 0)
        {
            cout << (N / i) << " ";
        }
    }
}

int main()
{
    divisors(15);
}