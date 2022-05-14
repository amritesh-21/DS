#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 2, 9};
    vector<pair<int, int>> v;

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        pair<int, int> p;
        p.first = arr[i];
        p.second = i;
    }

    return 0;
}