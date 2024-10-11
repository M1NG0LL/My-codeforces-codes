#include <iostream>
#include <cmath>

using namespace std;

int distancevalue(int x, int y)
{
    return abs(x - 2) + abs(y - 2);
}

int main()
{
    int arr[5][5], distance;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];

            if (arr[i][j] == 1)
            {
                distance = distancevalue(i, j);
            }
        }
    }

    cout << distance;
}