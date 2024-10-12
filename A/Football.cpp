#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int len = s.length(), num = 1;
    for (int i = 1; i <= len; i++)
    {
        if(s[i] == s[i-1])
        {
            num++;
        }
        else
            num = 1;

        if (num>=7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}