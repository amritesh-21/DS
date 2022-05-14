#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    v.pop_back();

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    v.pop_back();

    for (auto element : v)
    {
        cout << element << " ";
    }

    vector<int> v2(3, 50);

    cout << endl;
    swap(v, v2);

    for (auto element : v)
    {
        cout << element << " ";
    }

    vector<int> v3;
    v3.push_back(5);
    v3.push_back(6);
    v3.push_back(1);
    v3.push_back(0);
    v3.push_back(8);

    sort(v3.begin(), v3.end());

    for (auto element : v3)
    {
        cout << element << " ";
    }

    return 0;
}