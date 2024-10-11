#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int x, y, z;

    cin >> x >> y >> z;

    int result1 = x + y + z;
    int result2 = x + (y * z);
    int result3 = (x + y) * z;
    int result4 = x * y * z;
    int result5 = x * (y + z);

    int max_value = max({result1, result2, result3, result4, result5});

    cout << max_value;
}