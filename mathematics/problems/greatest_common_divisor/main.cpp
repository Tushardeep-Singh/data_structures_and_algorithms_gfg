// Greatest common divisor
#include <iostream>
#include <cmath>
using namespace std;

// time complexity : O(min(a,b))
// space complexity : theta(1)
// int grt_cmn_dsor(int a, int b)
// {
//     int sml_a_b = min(a,b);
//     int grt_a_b = max(a,b);
//     if (a == 0 || b == 0)
//     {
//         return 0;
//     }

//     int gcd{1};

//     if (grt_a_b % sml_a_b == 0)
//     {
//         gcd = sml_a_b;
//         return gcd;
//     }

//     for (int i = 1; i < sml_a_b; ++i)
//     {
//         if (((a * b) % (i * i)) == 0)
//         {
//             gcd = i;
//         }
//     }
//     return gcd;
// }

// int main()
// {
//     int a = 6;
//     int b = 4;
//     cout << grt_cmn_dsor(a, b);
// }

// -----------------------------

// euclidean algorithm :
// If a > b, then gcd(a,b) = gcd(a-b,b)
// int grt_cmn_dsor(int a, int b)
// {
//     if (a == 0)
//     {
//         return b;
//     }

//     if (b == 0)
//     {
//         return a;
//     }

//     while (a != b)
//     {
//         if (a > b)
//         {
//             a = (a - b);
//         }
//         else
//         {
//             b = (b - a);
//         }
//     }
//     return a; // or b
// }                

// int main()
// {
//     int a = 243;
//     int b = 45;
//     cout << grt_cmn_dsor(a, b);
// }

// -----------------------------

// optimized solution for euclidean algorithm :
int grt_cmn_dsor(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return grt_cmn_dsor(b, a % b);
    }
}

int main()
{
    int a = 12;
    int b = 16;
    cout << grt_cmn_dsor(a, b);
}