#include <iostream>
#include <string>
using namespace std;

bool vowelchecker(char c)
{
    if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i')
    {
        return true;
    }
    return false;
}

int main()
{
    string s;

    cin >> s;

    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        s[i] = tolower(s[i]);

        if (!vowelchecker(s[i]))
        {
            cout << "." << s[i];
        }
    }
    
}