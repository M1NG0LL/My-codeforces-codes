#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int position = 0;

    for (char temp : t)
    {
        if (s[position] == temp)
        {
            position++;
        }
    }

    cout << ++position;
}