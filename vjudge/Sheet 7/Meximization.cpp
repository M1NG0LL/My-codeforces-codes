#include <bits\stdc++.h>
using namespace std;

int solve(vector<int> &arr)
{
    deque<int> processed_arr;

    for (int num : arr)
    {
        auto it = std::find(processed_arr.begin(), processed_arr.end(), num);

        if (it != processed_arr.end())
        {
            processed_arr.push_front(num);
        }
        else
            processed_arr.push_back(num);
    }

    return processed_arr;
}

int main()
{
    int t;
    cin >> t;

    vector<vector<int>> results(t);

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
}