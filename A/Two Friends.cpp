#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n, counter = 0, l = 0, r = n - 1;
    cin >> n;

    vector<int> arr(n);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    if (n == 2)
        return 2;

    while (l < r)
    {
        if (l == arr[arr[l++]] || r == arr[arr[r--]])
            return 2;
    }
    return 3;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        cout << solve() << endl;
    }

    return 0;

    return 0;
}