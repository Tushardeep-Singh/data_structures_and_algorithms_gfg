// sieve of eratosthenes
// sieve algorithm

#include <iostream>
#include <vector>
using namespace std;

// solution 1
// void print_prime(int N)
// {

//     if (2 <= N)
//     {
//         cout << 2 << " ";
//     }
//     if (3 <= N)
//     {
//         cout << 3 << " ";
//     }
//     if (5 <= N)
//     {
//         cout << 5 << " ";
//     }
//     for (int i = 5; i <= N; i += 6)
//     {
//         if ((i + 2) <= N)
//         {
//             cout << (i + 2) << " ";
//         }
//         if ((i + 6) <= N)
//         {
//             cout << (i + 6) << " ";
//         }
//     }
// }

// // solution 2
// void print_prime(int N)
// {
//     bool prime[N];
//     for (int i = 2; i <= N; ++i)
//     {
//         prime[i] = true;
//     }

//     for (int i = 4; i <= N; i += 2)
//     {
//         prime[i] = false;
//     }

//     for (int i = 6; i <= N; i += 3)
//     {
//         if (prime[i] != false)
//         {
//             prime[i] = false;
//         }
//     }

//     for (int i = 10; i <= N; i += 5)
//     {
//         if (prime[i] != false)
//         {
//             prime[i] = false;
//         }
//     }

//     for (int i = 2; i <= N; ++i)
//     {
//         if (prime[i] == true)
//         {
//             cout << i << " ";
//         }
//     }
// }



// sieve algorithm



// void print_prime(int N)
// {
//     vector<bool> isprime(N + 1, true);

//     for (int i = 2; i * i <= N; ++i)
//     {
//         if (isprime[i])
//         {
//             for (int j = 2 * i; j <= N; j += i)
//             {
//                 isprime[j] = false;
//             }
//         }
//     }

//     for (int i = 2; i <= N; ++i)
//     {
//         if (isprime[i])
//         {
//             cout << i << " ";
//         }
//     }
// }

// time complexity : O(n log log n)
void print_prime(int N)
{
    vector<bool> isprime(N + 1, true);
    for (int i = 2; i <= N; ++i)
    {
        if (isprime[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= N; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}

int main()
{
    print_prime(15);
}