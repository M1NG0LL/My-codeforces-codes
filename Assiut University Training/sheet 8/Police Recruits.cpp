#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, police_members = 0, untreated_crimes = 0;
    cin >> n;

    while (n--)
    {
        int temp;
        cin >> temp;

        if (temp != -1)
        {
            police_members += temp;
        }
        else
        {
            if (temp == 0)
                untreated_crimes++;
            else
                police_members--;
        }
    }

    cout << untreated_crimes;
}