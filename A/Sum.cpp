#include <iostream>
using namespace std;

int main()
{
    int num, x, y, z;

    cin >> num;

    string ans[num];

    for (int i = 0; i < num; i++)
    {
        cin >> x >> y >> z;

        if (x + y == z || x + z == y || y + z == x)
            ans[i] = "YES";
        else   
            ans[i] = "NO";
    }

    for (string s : ans)
        cout << s << endl;
}