#include <algorithm>
#include <array>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    array<int, 10> arr;

    for (int& value : arr) {
        cin >> value;
    }

    sort(arr.begin(), arr.end());

    for (int& value : arr) {
        value = value + 1;
        cout << value << ' ';
    }

    return 0;
}