#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int num = 0;
    int least_score  = arr[k - 1];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= least_score && arr[i]>0)
        {
            num++;
        }
    }

    cout << num;
}