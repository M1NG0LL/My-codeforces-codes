#include <bits/stdc++.h>
using namespace std;

int count(string s)
{
    unordered_set<char> c;

    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        c.insert(s[i]);
    }

    return c.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    int ans = count(s);

    if (ans % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}