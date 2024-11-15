#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a = 0, b = 0, temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a += temp;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        b += temp;
    }

    if (a == b)
        cout << "Yes";
    else
    {
        cout << "No";
    }
}