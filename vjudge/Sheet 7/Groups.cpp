#include <bits\stdc++.h>
using namespace std;

int solve(vector<int> &arr)
{
    long moves = 0;

    unordered_set<int> used;

    for (int num : arr)
    {
        while (num % 2 == 0 && used.find(num) == used.end())
        {
            used.insert(num);
            moves++;
            num /= 2;
        }
    }

    return moves;
}

int main()
{
    int t;
    cin >> t;

    vector<long long> results(t);

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[j];
        }

        results[i] = solve(arr);
    }

    for (long long res : results)
    {
        cout << res << "\n";
    }
}