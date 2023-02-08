// Given two integers ‘a’ and ‘m’. The task is to find the smallest modular multiplicative inverse of ‘a’ under modulo ‘m’.

//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Complete this function
    int modInverse(int a, int m)
    {
        // Your code here
        //  time complexity : O(m)
        //  space complexity : O(1)
        if (a == 0 || m == 0)
        {
            return -1;
        }

        for (int i = 1; i < m; ++i)
        {
            if ((a * i) % m == 1)
            {
                return i;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{

    int a, m;

    // taking input a and m
    cin >> a >> m;
    Solution ob;
    // calling function modInverse()
    cout << ob.modInverse(a, m) << endl;

    return 0;
}
// } Driver Code Ends