// { Driver Code Starts
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// } Driver Code Ends

// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int A[], int n)
{

    int local_max = 0;
    int global_max = INT_MIN; //which is nothing but negative infinity

    for (int i = 0; i < n; i++)
    {
        local_max += A[i];
        if (local_max < 0)
            local_max = 0;
        else if (global_max < local_max)
        {
            global_max = local_max;
        }
    }
    return global_max;
}

// { Driver Code Starts.

int main()
{
    int t, n;

    cin >> t;   //input testcases
    while (t--) //while testcases exist
    {

        cin >> n; //input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; //inputting elements of array

        cout << maxSubarraySum(a, n) << endl;
    }
}
// } Driver Code Ends