#include <iostream>
using namespace std;

int main()
{
    long long n, s;

    cin >> n >> s;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0, max_num = 0;
    long long sum = 0;

    for (int right = 0; right < n;right++)
    {
        sum += arr[right];

        while(sum > s)
        {
            sum -= arr[left];
            left++;
        }

        max_num = max(max_num, right - left + 1);
    }

    cout << max_num << endl;
}