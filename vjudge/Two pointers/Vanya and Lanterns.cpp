#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    vector<double> lanterns(n);

    for (int i = 0; i < n; i++)
    {
        cin >> lanterns[i];
    }

    sort(lanterns.begin(), lanterns.end());

    double x = 0.0;

    for (int i = 1; i < n; i++)
    {
        x = max(x, lanterns[i] - lanterns[i - 1]);
    }

    float ans = max(lanterns[0], l - lanterns[n - 1]);

    ans = max(ans, x / 2.0);

    cout.precision(10);
    cout << fixed << ans << endl;
}