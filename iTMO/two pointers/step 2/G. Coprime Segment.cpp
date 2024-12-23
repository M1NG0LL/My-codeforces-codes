#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    vector<ll> a(t);

    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }

    ll overall_gcd = a[0];
    for (int i = 1; i < t; i++)
    {
        overall_gcd = __gcd(overall_gcd, a[i]);
        if (overall_gcd == 1)
            break;
    }

    if (overall_gcd != 1)
    {
        cout << -1;
        return 0;
    }

    ll ctr = INT_MAX;

    for (ll i = 0; i < t; i++)
    {
        ll curr_gcd = a[i];

        ll x = i;

        while (x < t && curr_gcd != 1)
        {
            curr_gcd = __gcd(curr_gcd, a[x]);
            x++;
        }

        if (curr_gcd == 1)
        {
            ctr = min(ctr, x - i + 1);
        }
    }

    cout << ctr;
}