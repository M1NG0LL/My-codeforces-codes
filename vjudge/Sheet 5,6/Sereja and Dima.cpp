#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> cards(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    int l = 0, r = n - 1;
    int players[2] = {0, 0};

    for (int i = 0; i < n; i++)
    {
        if (cards[l] >= cards[r])
            players[i % 2] += cards[l++];
        else
            players[i % 2] += cards[r--];
    }

    cout << players[0] << " " << players[1];
}