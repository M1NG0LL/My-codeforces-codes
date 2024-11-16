#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num = 1;
    string magnet1, magnet2;

    cin >> n;

    cin >> magnet1;
    while (n--)
    {
        cin >> magnet2;

        if (magnet1 != magnet2)
            num++;

        magnet1 = magnet2;
    }

    cout << num;
}