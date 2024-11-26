#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k1, k2;
    cin >> n >> k1 >> k2;

    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    vector<int> diff(n);
    for (int i = 0; i < n; i++)
    {
        diff[i] = abs(A[i] - B[i]);
    }

    sort(diff.begin(), diff.end(), greater<int>());

    int total_operations = k1 + k2;

    for (int i = 0; i < n; i++)
    {
        if (total_operations <= 0)
        {
            break;
        }

        int reduce = min(diff[i], total_operations);

        diff[i] -= reduce;

        total_operations -= reduce;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += diff[i] * diff[i];
    }

    cout << ans << endl;

    return 0;
}
