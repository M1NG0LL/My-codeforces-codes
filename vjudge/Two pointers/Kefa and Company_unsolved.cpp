#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, max_friendship = 0;
    cin >> n >> d;

    for (int i = 0; i < n; i++)
    {
        int m, s;

        cin >> m >> s;

        if (m < d)
        {
            max_friendship += s;
        }
    }

    cout << max_friendship << endl;
    return 0;
}