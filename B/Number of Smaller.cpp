#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    int arr1[n], arr2[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < m; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if(arr2[i] > arr1[j])
            {
                count++;
            }
            else
                break;
        }

        cout << count << " ";
    }

    cout << endl;
}