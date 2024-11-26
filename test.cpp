#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> ans(t);

    for (int i = 0; i < t; i++)
    {
        int counter = 0, a1, a2, b1, b2;

        cin >> a1 >> a2 >> b1 >> b2;

        if (a1 > b1)
            counter++;
        if (a1 > b2)
            counter++;
        if (a2 > b1)
            counter++;
        if (a2 > b2)
            counter++;

        if (counter > 3)
        {
            counter--;
        }

        ans[i] = counter;
    }

    for (int a : ans)
    {
        cout << a << endl;
    }

    return 0;
}