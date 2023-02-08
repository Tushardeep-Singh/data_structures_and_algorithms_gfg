// You are given two numbers a and b. You need to find the multiplication of a and b under modulo M (M as 109+7).
//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int multiplicationUnderModulo(long long a, long long b)
    {
        // your code here
        //  time complexity : O(1)
        //  space complexity : O(1)
        if ((a == 0) || (b == 0))
        {
            return 0;
        }
        // using 1000000007 instead of pow(10,9) + 7 can save some computational time.
        long long m = 1000000007;
        long long result = ((a % m) * (b % m)) % m;
        return result;
    }
};

//{ Driver Code Starts.
int main()
{

    long long a;
    long long b;

    // taking input a and b
    cin >> a >> b;
    Solution ob;
    // calling multiplicationUnderModulo() function
    cout << ob.multiplicationUnderModulo(a, b) << endl;

    return 0;
}
// } Driver Code Ends