#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cin >> num1 >> num2;

    int arr1[num1], arr2[num2];

    for (int i = 0; i < num1; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < num2; i++)
    {
        cin >> arr2[i];
    }

    int i = 0, j = 0;
    while (i < num1 && j < num2) {
        if (arr1[i] < arr2[j]) {
            cout << arr1[i] << " ";
            i++;
        } else {
            cout << arr2[j] << " ";
            j++;
        }
    }

    while (i < num1) {
        cout << arr1[i] << " ";
        i++;
    }

    while (j < num2) {
        cout << arr2[j] << " ";
        j++;
    }
    
}