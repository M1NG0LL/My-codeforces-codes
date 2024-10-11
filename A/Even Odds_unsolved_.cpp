#include <iostream>

using namespace std;

int main()
{
    long x, y;

    cin >> x >> y;

    int oddnum = (x + 1) / 2;

    if (y <= oddnum)
    {
    cout << 2 * y - 1 << endl;
    }
    else {
        cout << 2 * (y - oddnum) << endl;
    }
}


// Unsolved
