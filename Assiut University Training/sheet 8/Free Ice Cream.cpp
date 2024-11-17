#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;

    long long distress_kids = 0;

    while (n--)
    {
        char c;
        long long d;

        cin >> c >> d;

        if (c == '+')
        {
            x += d;
        }
        else
        {
            if (d <= x)
            {
                x -= d;
            }
            else
                distress_kids++;
        }
    }

    cout << x << " " << distress_kids;
}