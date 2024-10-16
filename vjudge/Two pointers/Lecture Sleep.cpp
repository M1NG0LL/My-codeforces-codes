#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n), t(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    // Part where Mishka is awake

    int Mishka_awake = 0;

    for (int i = 0; i < n; i++)
    {
        if (t[i] == 1)
        {
            Mishka_awake += a[i];
        }
    }

    // part where Mishka is waked

    int max_theorems = 0, current_theorems = 0;

    for (int i = 0; i < k; i++)
    {
        if (t[i] == 0)
        {
            current_theorems += a[i];
        }
    }

    max_theorems += current_theorems;

    for (int i = k; i < n; i++)
    {
        if (t[i - k] == 0)
        {
            current_theorems -= a[i - k];
        }
        if (t[i] == 0)
        {
            current_theorems += a[i];
        }
        max_theorems = max(max_theorems, current_theorems);
    }

    cout << Mishka_awake + max_theorems << endl;
    return 0;
}