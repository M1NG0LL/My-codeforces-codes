#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int weights[n];

    for (int j = 0; j < n; j++)
    {
        cin >> weights[j];
    }

    int left = 0, right = n - 1;
    int lsum = 0, rsum = 0, count = 0;

    while (left <= right)
    {
        if (lsum < rsum)
        {
            lsum += weights[left++];
        }
        else
        {
            rsum += weights[right--];
        }

        if (lsum == rsum)
        {
            count = max(count, left + (n - right - 1));
        }
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}