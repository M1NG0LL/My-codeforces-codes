#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sum = 0;
    cin >> n >> m;

    while (m > n)
    {
        if (m % 2 == 0)
        {
            m /= 2;
        }
        else
            m++;

        sum++;
    }

    sum += (n - m);

    cout << sum << endl;

    return 0;
}