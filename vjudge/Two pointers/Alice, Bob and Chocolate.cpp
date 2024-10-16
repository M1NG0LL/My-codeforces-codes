#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;

    cin >> num;

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    int left = 0, right = num - 1, Alice = 0, Bob = 0, Alice_time = 0, Bob_time = 0;

    while (left <= right)
    {
        if (Alice_time <= Bob_time)
        {
            Alice_time += arr[left];
            Alice++;
            left++;
        }
        else
        {
            Bob_time += arr[right];
            Bob++;
            right--;
        }
    }

    cout << Alice << " " << Bob << endl;
}