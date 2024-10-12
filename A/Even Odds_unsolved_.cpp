#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    int odd_num = (n + 1) / 2;

    if (k <= odd_num)
    {
        cout << abs((k * 2) - 1);
    }
    else
        cout << abs(2 * (odd_num - k));
}