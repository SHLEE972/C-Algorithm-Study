#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int leftMiddle = (N - 1) / 2;
    int rightMiddle = N / 2;

    cout << arr[leftMiddle];

    if (arr[leftMiddle] != arr[rightMiddle]) {
        cout << ' ' << arr[rightMiddle];
    }

    cout << '\n';

    return 0;
}