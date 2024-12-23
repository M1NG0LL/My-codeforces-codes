#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    string s;
    cin >> s;

    int ctr = 0;

    for (int i = 1; i < t; i++)
    {
        if (s[i] == s[i - 1])
        {
            ctr++;
        }
    }
    cout << ctr;
}