#include <iostream>
using namespace std;

int main()
{
    int num, x, y;

    cin >> num;

    int ans_arr[num];

    for (int i = 0; i < num; i++)
    {
        cin >> x >> y;

        if (x % y == 0)
            ans_arr[i] = 0;
        else
            ans_arr[i] = (y - x % y) % y;
    }

    for (int i = 0; i < num; i++)
    {
        cout << ans_arr[i] << endl;
    }
}