#include <iostream>
#include <algorithm>
using namespace std;

int kthsmallest(int arr[], int n, int k)
{
    sort(arr, arr + n+1);
    return arr[k - 1];
}

int main()
{
    int t;
    int N;
    int k;
    cin >> t;
    while (t != 0)
    {
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        cout << kthsmallest(arr, N, k) << endl;
        t--;
    }
    return 0;
}
