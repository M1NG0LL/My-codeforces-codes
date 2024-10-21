#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    int even = 0, odd = 0, odddire = -1, evendire = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
            evendire = i + 1;
        }
        else
        {
            odd++;
            odddire = i + 1;
        }
    }

    if (even == 1)
    {
        cout << evendire << endl;
    }
    else
    {
        cout << odddire << endl;
    }

    return 0;
}