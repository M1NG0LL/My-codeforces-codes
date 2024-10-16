#include <bits/stdc++.h>
using namespace std;

string check(int n)
{
    bool checker = true;
    while (checker)
    {
        checker = false;

        if (n > 2020)
        {
            n -= 2020;
            checker = true;
        }
        else
        {
            n -= 2021;
            checker = true;
        }
    }
    if (n == 0)
        return "YES";
    else
        return "NO";
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cout << check(n) << endl;
    }
}