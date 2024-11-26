#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    if (n <= k)
    {
        cout << "NO";
        return 0;
    }

    int time_of_1oven = ((n + k - 1) / k) * t, cakes_baked = (d / t) * k, time_of_2ovens = d;

    while (cakes_baked < n)
    {
        cakes_baked += 2 * k;
        time_of_2ovens += t;
    }

    if (time_of_1oven > time_of_2ovens)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}