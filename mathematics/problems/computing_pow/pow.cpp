// computing power
#include <iostream>
using namespace std;

// solution 1
// time complexity : O(n)
// space complexity : O(1)
// int pow(int x, int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }

//     if (n == 1)
//     {
//         return x;
//     }

//     long long result = 1;
//     for (int i = 1; i <= n; ++i)
//     {
//         result *= x;
//     }
//     return result;
// }

// solution 2
// time complexity : O(log n)
// space complexity : O(1)
// int pow(int x, int n)
// {
//     int result = 1;
//     if (n == 0)
//     {
//         return result;
//     }

//     for (int i = 2; i <= n; i *= 2)
//     {
//         for (int i = 2; i <= n; i *= 2)
//         {
//             result *= x;
//         }
//     }
//     if (n % 2 == 0)
//     {
//         return result;
//     }
//     else
//     {
//         return result * x;
//     }
// }

// time complexity : O(log n)
// space complexity : O(log n)
int pow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return x;
    }
    int temp = pow(x, n / 2);
    temp *= temp;
    if (n % 2 == 0)
    {
        return temp;
    }
    return (temp * 2);
}

int main()
{
    cout << pow(2, 17);
}
