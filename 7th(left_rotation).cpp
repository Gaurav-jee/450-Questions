#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void rotate_array(int arr[], int k, int n)
{
    //cout << "n=" << n << "k=" << k <<endl;
    int temp;
    int d;
    int j;
    int g_c_d = gcd(n, k);
    //cout << g_c_d << endl;
    for (int i = 0; i < g_c_d; i++)
    {
        temp = arr[i];
        j = i;
        while (1)
        {
            d = (j + k) % n;
            if (d == i)
                break;
            arr[j] = arr[d];
            j = d;
        }
        arr[j] = temp;
    }
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        rotate_array(arr, 1, n);
        print_array(arr, n);
    }
    return 0;
}