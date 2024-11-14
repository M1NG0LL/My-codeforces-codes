#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int open = 0, ans = 0;

    for (char c : s)
    {
        if (c == '(')
            open++;
        else if (c == ')' && open > 0)
        {
            open--;
            ans += 2;
        }
    }

    cout << ans;
}