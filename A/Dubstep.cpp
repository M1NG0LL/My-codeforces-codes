#include <iostream>

using namespace std;

int main()
{
    string s;

    getline(cin, s);

    int pos;
    while ((pos = s.find("WUB")) != string::npos) {
        s.replace(pos, 3, " ");
    }

    int start = s.find_first_not_of(" ");
    int end = s.find_last_not_of(" ");

    if (start != string::npos && end != string::npos) {
        s = s.substr(start, end - start + 1);
    }

    cout << s;
}