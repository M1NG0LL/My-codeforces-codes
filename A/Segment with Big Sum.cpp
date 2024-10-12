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

    int left = 0, min_num = n;
    long long sum = 0;

    for (int right = 0; right < n;right++)
    {
        sum += arr[right];

        while(sum > s)
        {
            min_num = min(min_num, right - left + 1);
            sum -= arr[left];
            left++;
        }
        
    }

    if (min_num == n) {
        cout << -1 << endl;
    } else {
        cout << min_num << endl;
    }
}