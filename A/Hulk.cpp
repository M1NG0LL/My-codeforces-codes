#include <iostream>

using namespace std;

int main()
{
    int x;

    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
            cout << "I love ";
        else 
            cout << "I hate ";

        if (i != x)
            cout << "that ";
    }

    cout << "it";
}