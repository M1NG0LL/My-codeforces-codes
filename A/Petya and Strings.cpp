#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string Lowerstring(const string& s) {
    string lower_s = s; 
    transform(lower_s.begin(), lower_s.end(), lower_s.begin(), ::tolower); 
    return lower_s;
}

int main()
{
    string string1, string2;

    cin >> string1 >> string2;

    string1 = Lowerstring(string1);
    string2 = Lowerstring(string2);

    if (string1 < string2)
        cout << -1;
    else if(string1 > string2)
        cout << 1;
    else
        cout << 0;
}