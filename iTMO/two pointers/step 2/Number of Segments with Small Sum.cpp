#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, s;
    cin >> n >> s;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0;
    ll ctr = 0;
    ll sum = 0;

    for (int r = 0; r < n; r++)
    {
        sum += a[r];

        while (sum > s)
        {
            sum -= a[l];
            l++;
        }
        ctr += r - l + 1;
    }

    cout << ctr << endl;
}