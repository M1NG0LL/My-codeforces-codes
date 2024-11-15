#include <bits/stdc++.h>
using namespace std;

void solve(int n, string s)
{
    if (s[0] == s[-1])
    {
        cout << n << endl;
        return;
    }
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