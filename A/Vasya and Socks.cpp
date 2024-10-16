#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    int num_days = 0;

    while (n > 0)
    {
        num_days++;
        n--;

        if (n % m == 0)
            n++;
    }

    cout << num_days;
}