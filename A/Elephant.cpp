#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x, ctr = 0;
    cin >> x;

    while (x > 0)
    {
        if (x >= 5)
            x -= 5;
        else if (x >= 4)
            x -= 4;
        else if (x >= 3)
            x -= 3;
        else if (x >= 2)
            x -= 2;
        else if (x >= 1)
            x -= 1;

        ctr++;
    }

    cout << ctr;
}