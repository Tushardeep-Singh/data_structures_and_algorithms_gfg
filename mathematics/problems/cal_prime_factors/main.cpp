#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// time complexity : O(sqrt(n))
// space complexity : O(1)
void prime_factors(int N)
{
    while ((N % 2) == 0)
    {
        cout << 2 << " ";
        N = (N / 2);
    }
    while ((N % 3) == 0)
    {
        cout << 3 << " ";
        N = (N / 3);
    }

    for (int i = 5; i <= sqrt(N); i += 6)
    {
        while ((N % i) == 0)
        {
            cout << i << " ";
            N = (N / i);
        }
        while ((N % (i + 2)) == 0)
        {
            cout << (i + 2) << " ";
            N = (N / (i + 2));
        }
    }

    if (N > 3) // since 2,3 are already handled above
    {
        cout << N;
    }
}
int main()
{
    int a = 151;
    prime_factors(a);
}