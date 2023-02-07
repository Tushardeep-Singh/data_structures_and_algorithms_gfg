// Given the first 2 terms A and B of a Geometric Series. The task is to find the Nth term of the series.
/*
Example 1:

Input:
A = 2 
B = 3
N = 1
Output: 2
Explanation: The first term is already
given in the input as 2


Example 2:

Input:
A = 1
B = 2
N = 5
Output: 16
Explanation: Common ratio = 2,
Hence second term is 1*(2)^(5-1) = 2^4 = 16 
*/

//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
#include <cmath>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Complete this function
    double termOfGP(int A, int B, int N)
    {
        // Your code here
        if ((A == 0) || (B == 0))
        {
            return (NAN); // to return nan (not a number)
        }

        if (N == 1)
        {
            return A;
        }

        double cmn_ratio = ((double)B / (double)A); // type-casting is important, or otherwise a int B/A will be stored in double cmn_ratio which will be of no use.
        double n_term = ((A)*pow(cmn_ratio, (N - 1))); // nth term = a1 * r^(n-1)

        return n_term;
    }
};

//{ Driver Code Starts.

int main()
{
    int A, B;
    cin >> A >> B; // input first and second term of gp
    int N;
    cin >> N; // input n
    Solution ob;
    cout << floor(ob.termOfGP(A, B, N)) << endl;

    return 0;
}

// } Driver Code Ends