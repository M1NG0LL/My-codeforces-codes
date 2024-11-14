#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> deck(n), queries(q);

    for (int i = 0; i < n; i++)
    {
        cin >> deck[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> queries[i];
    }

    for (int query : queries)
    {
        auto it = find(deck.begin(), deck.end(), query);
        int index = distance(deck.begin(), it);

        cout << index + 1 << " ";

        int temp = *it;
        deck.erase(it);
        deck.insert(deck.begin(), temp);
    }
}