#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int chest = 0, biceps = 0, back = 0, input;

    for (int i = 0; i < n; i++)
    {
        cin >> input;

        if (i % 3 == 0)
            chest += input;
        else if (i % 3 == 1)
            biceps += input;
        else
            back += input;
    }

    if (chest > biceps && chest > back)
        cout << "chest" << endl;
    else if (biceps > chest && biceps > back)
        cout << "biceps" << endl;
    else
        cout << "back" << endl;
}