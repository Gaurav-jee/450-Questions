#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function template for C++

class Solution
{
public:
    int middle(int A, int B, int C)
    {
        if ((A < B && B < C) || (A > B && B > C))
            return B;
        else if ((B < A && A < C) || (B > A && A > C))
            return A;
        else if (A < C && C < B || (A > C && C > B))
            return C;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << ob.middle(A, B, C) << "\n";
    }
    return 0;
} // } Driver Code Ends