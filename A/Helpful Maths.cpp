#include <bits/stdc++.h>
using namespace std;

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    int len = s.length();
    vector<int> numbers;

    for (int i = 0; i < len; i++)
    {
        if (s[i] != '+')
        {
            numbers.push_back(s[i] - '0');
        }
    }
    sort(numbers.begin(), numbers.end());

    len = numbers.size();

    for (int i = 0; i < len; i++)
    {
        cout << numbers[i];

        if (i != (len - 1))
        {
            cout << "+";
        }
    }
}