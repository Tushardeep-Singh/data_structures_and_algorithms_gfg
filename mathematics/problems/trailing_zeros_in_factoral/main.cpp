// trailing zeros in factorial:
#include <iostream>
using namespace std;

// Solution 1
// time complexity : O(n) , for loop will loop 'n' times and while loop will iterate less than 'n' times.
// space complexity : theta(1) , constant
// The solution below has one major problem, that number of digits stored in long long ar limited and will be exceeded easily.
// int trailing_zeros_in_fact(int n)
// {
//     long long factorial = 1;
//     for (int i = 0; i < n; ++i)
//     {
//         factorial *= (n - i);
//     }

//     int zero_count = 0;
//     while (factorial > 0)
//     {
//         if ((factorial % 10) == 0)
//         {
//             ++zero_count;
//             factorial = (factorial / 10);
//         }
//         else
//         {
//             break;
//         }
//     }
//     return zero_count;
// }
// int main()
// {
//     int a = 5;
//     cout << trailing_zeros_in_fact(a);
// }

// Solution 2
// minimum Number of trailing zero's in a factoral is equal to floor(n/5)
// Then after each 5 times of n, count of 5 in factorisation of n gets increased by 1.
// Time complexity : theta(logn)
// space complexity: theta(1)
int trailing_zeros_in_fact(int n)
{
    if (n < 1)
    {
        return 0;
    }
    int zero_count = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        zero_count += (n / i);
    }
    return zero_count;
}
int main()
{
    int a = 100000;
    cout << trailing_zeros_in_fact(a);
}