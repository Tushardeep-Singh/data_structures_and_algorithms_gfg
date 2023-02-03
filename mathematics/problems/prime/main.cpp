// prime
#include <iostream>
#include <cmath>
using namespace std;

// time complexity = O(n)
// bool prime(int n)
// {
//     if (n == 1)
//     {
//         return false;
//     }
//     for (int i = 2; i < n; ++i)
//     {
//         {
//             if ((n % i) == 0)
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main()
// {
//     int a = 12;
//     cout << boolalpha;
//     cout << prime(a);
// }

// -----------

// below, we will traverse only till sqrt(n)
// eg: divisors of 30 = 1, 2, 3, 5, 6, 10, 15, and 30
// square root of 30 = 5.47 = 5
// Now, see all the divisors befor 5 and including 5, if we multiply them in pairs of 2, they form the values after 5, hence we must only check till sqrt(n)
// This below code is better, because it's
// time complexity = O(sqrt(n))
// bool prime(int n)
// {
//     if (n == 1)
//     {
//         return false;
//     }
//     else
//     {
//         for (int i = 2; i <= sqrt(n); ++i)
//         {
//             if ((n % i) == 0)
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main()
// {
//     int a = 17;
//     cout << boolalpha;
//     cout << prime(a);
// }

// --------------------
// more optimized:
bool prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n == 3)
    {
        return true;
    }
    if ((n % 2) == 0)
    {
        return false;
    }
    if ((n % 3) == 0)
    {
        return false;
    }

    // after removing all multiples of 2,,3 prime numbers are left: 5,7,11,13,17,19,23
    for (int i = 5; i < sqrt(n); i += 6)
    {
        if (((n % i) == 0) && (n % (i + 2) == 0))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a = 97;
    cout << boolalpha;
    cout << prime(a);
}