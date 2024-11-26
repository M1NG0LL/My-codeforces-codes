#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, s;
    cin >> n >> s;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = n - 1, ctr = INT_MAX;
    ll sum = 0;

    for (int right = 0; right < n; right++)
    {
        sum += a[right];

        if (sum == s)
        {
            cout << ctr << endl;
            return 0;
        }

        while (sum - a[l] >= s)
        {
            sum -= a[l];
            ctr = min(ctr, r - l + 1);
            l++;
        }
    }

    cout << ctr << endl;
}
