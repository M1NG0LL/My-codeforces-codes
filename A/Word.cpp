#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    int len = s.length(), upper = 0, lower = 0;

    for (int i = 0; i < len; i++)
    {
        if (isupper(s[i]))
            upper++;
        else if (islower(s[i]))
            lower++;
    }

    if (upper > lower)
        for (int i = 0; i < len; i++)
            cout << (char)toupper(s[i]);
    else
        for (int i = 0; i < len; i++)
            cout << (char)tolower(s[i]);
}