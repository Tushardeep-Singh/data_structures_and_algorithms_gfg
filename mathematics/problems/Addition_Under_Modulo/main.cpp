// Given two numbers a and b, find the sum of a and b. Since the sum can be very large, find the sum modulo 109+7.

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
    long long sumUnderModulo(long long a, long long b)
    {
        // time complexity : O(1)
        // space complexity : O(1)
        // using (a+b) mod m = ((a mod m) + (b mod m)) mod m
        // code here
        long long m = (pow(10, 9) + 7);
        long long result = ((a % m) + (b % m)) % m;

        return result;
    }
};

//{ Driver Code Starts.
int main()
{

    long long a;
    long long b;
    cin >> a >> b;
    Solution ob;
    cout << ob.sumUnderModulo(a, b) << endl;

    return 0;
}
// } Driver Code Ends