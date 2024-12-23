#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int k, n, w;
    cin >> k >> n >> w;

    int total = 0;

    for (int i = 1; i <= w; i++)
    {
        total += (k * i);
    }

    int ans = n - total;

    if (ans < 0)
        cout << abs(ans);
    else
        cout << 0;
}