#include <bits/stdc++.h>
using namespace std;

bool IsPerfectsquare(int value)
{
    int temp = static_cast<int>(sqrt(value));

    return (temp * temp == value);
}

void solve()
{
    int n;
    bool checker = true;
    cin >> n;

    int temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        if (!IsPerfectsquare(temp))
            checker = false;
    }

    if (!checker)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}