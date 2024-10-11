#include <iostream>
#include <string>

using namespace std;

string lower(string s)
{
    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        s[i] = tolower(s[i]);
    }

    return s;
}

int main()
{
    int num;

    cin >> num;

    string arr[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < num; i++)
    {
        if (lower(arr[i]) == "yes")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}