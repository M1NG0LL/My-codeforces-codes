#include <bits/stdc++.h>

using namespace std;

void solve(int n, string s)
{
    int x = 0, y = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'U')
            y++;
        else if (s[i] == 'R')
            x++;
        else if (s[i] == 'D')
            y--;
        else
            x--;

        if (x == 1 && y == 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    vector<pair<int, string>> testCases;

    for (int i = 0; i < t; i++)
    {
        int n;
        string s;
        cin >> n >> s;
        testCases.emplace_back(n, s);
    }

    for (auto testcase : testCases)
    {
        solve(testcase.first, testcase.second);
    }

    return 0;
}