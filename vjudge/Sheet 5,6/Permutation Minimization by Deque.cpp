#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &vc)
{
    deque<int> dq;

    for (int x : vc)
    {
        if (dq.empty() || x < dq.front())
        {
            dq.push_front(x);
        }
        else
        {
            dq.push_back(x);
        }
    }

    int len = vc.size();
    for (int i = 0; i < len; ++i)
    {
        cout << dq[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    vector<vector<int>> test_cases(t);

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        test_cases[i].resize(n);

        for (int j = 0; j < n; ++j)
        {
            cin >> test_cases[i][j];
        }
    }

    for (auto &test_case : test_cases)
    {
        solve(test_case);
    }
}