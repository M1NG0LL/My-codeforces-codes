#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int p, q, rooms = 0;

    while (n--)
    {
        cin >> p >> q;

        if (p + 2 <= q)
        {
            rooms++;
        }
    }

    cout << rooms;
}