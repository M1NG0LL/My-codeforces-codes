#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    bool reverse = false;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
                cout << "#";
        }
        else
        {
            if (!reverse)
            {
                for (int j = 0; j < m - 1; j++)
                    cout << ".";
                cout << "#";
            }
            else
            {
                cout << "#";
                for (int j = 0; j < m - 1; j++)
                    cout << ".";
            }
            reverse = !reverse;
        }

        cout << endl;
    }
}