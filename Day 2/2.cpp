#include <bits/stdc++.h>
using namespace std;

void rotateArray(int a[], int n)
{
    int temp = a[0];
    for (int i = 0; i < n - 1; i++)
    {

        a[i] = a[i + 1];
    }
    a[n - 1] = temp;
}

void rotate(int a[], int d, int n)
{
    for (int i = 0; i < d; i++)
    {
        rotateArray(a, n);
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the number of shifts";
    int d;
    cin >> d;

    rotate(a, d, n);

    // int ar[n];
    // for (int i = 0; i < n - d; i++)
    // {
    //     ar[i] = a[i + d];
    // }
    // int j = 0;
    // for (int i = n - d; i < n; i++)
    // {
    //     ar[i] = a[j];
    //     j++;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    return 0;
}