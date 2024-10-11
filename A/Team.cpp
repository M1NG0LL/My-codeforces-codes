#include <iostream>
using namespace std;

int main()
{
    int num, x, y, z, solved_problems = 0;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> x >> y >> z;

        if (x+y+z>=2)
            solved_problems++;
    }

    cout << solved_problems;
}