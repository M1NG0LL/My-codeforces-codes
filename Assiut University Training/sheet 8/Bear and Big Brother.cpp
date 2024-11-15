#include <iostream>

using namespace std;

int main()
{
    int a, b, years = 0;

    cin >> a >> b;

    while (true)
    {
        if (a > b)
            break;

        a *= 3;
        b *= 2;
        years += 1;
    }
    cout << years;
}