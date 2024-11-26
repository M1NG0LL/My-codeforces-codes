#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m, input;
    ll counter = 0;

    cin >> n >> m;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        freq[input]++;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> input;
        counter += freq[input];
    }

    cout << counter;
}