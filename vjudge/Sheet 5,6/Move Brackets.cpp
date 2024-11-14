#include <bits/stdc++.h>
using namespace std;

void solve(int n, string s)
{
    int temp = 0, ans = 0;

    for (char c : s)
    {
        if (c == '(')
        {
            temp++;
        }
        else
        {
            temp--;
        }

        if (temp < 0)
        {
            ans++;
            temp = 0;
        }
    }

    cout << ans << "\n";
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
}