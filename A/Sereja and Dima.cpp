#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = n - 1, Sereja = 0, Dima = 0;

    bool Serejaturn = true;

    while (l < r)
    {
        if (a[l] > a[r])
        {
            if (Serejaturn)
            {
                Sereja += a[l];
            }
            else
            {
                Dima += a[l];
            }
            l++;
        }
        else
        {
            if (Serejaturn)
            {
                Sereja += a[r];
            }
            else
            {
                Dima += a[r];
            }
            r--;
        }

        Serejaturn = !Serejaturn;
    }

    cout << Sereja << " " << Dima;
}