#include <iostream>

using namespace std;

int main()
{
    long long num;
    int lucknum = 0;

    cin >> num;

    while (num > 0)
    {
        int x = num % 10;

        if (x == 4 || x == 7)
        {
            lucknum++;
        }

        num /= 10;
    }

    if (lucknum == 0) {
        cout << "NO" << endl;
        return 0;
    }

    while (lucknum > 0)
    {
        int x = lucknum % 10;
        if (x != 4 && x != 7) {
            cout << "NO" << endl;
            return 0;
        }
        lucknum /= 10;

    }

    cout << "YES" << endl;
}