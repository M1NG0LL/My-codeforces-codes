#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<bool> covered(m + 1, false);

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;

        for (int j = l; j <= r; j++)
        {
            covered[j] = true;
        }
    }

    vector<int> uncovered;
    for (int i = 1; i <= m; ++i)
    {
        if (!covered[i])
        {
            uncovered.push_back(i);
        }
    }

    cout << uncovered.size() << "\n";
    if (!uncovered.empty())
    {
        for (int ans : uncovered)
        {
            cout << ans << " ";
        }
    }

    return 0;
}