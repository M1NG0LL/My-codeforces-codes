#include <bits/stdc++.h>
using namespace std;

bool CanBalance(double m, const vector<int> &arr, double k);

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    double low = 0, high = 1000, mid = 0, result = 0;

    for (int i = 0; i < 100; i++)
    {
        mid = (low + high) / 2;

        if (CanBalance(mid, a, k))
        {
            result = mid;
            low = mid;
        }
        else
            high = mid;
    }

    cout << fixed << setprecision(9) << result << endl;
}

bool CanBalance(double mid, const vector<int> &arr, double k)
{
    double surplus = 0.0, deficit = 0.0;

    for (int x : arr)
    {
        if (x > mid)
        {
            surplus += (x - mid) * (1 - k / 100.0);
        }
        else
            deficit += mid - x;
    }
    return surplus >= deficit;
}
