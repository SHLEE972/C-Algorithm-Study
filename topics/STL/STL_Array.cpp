#include <algorithm>
#include <array>
#include <iostream>

using namespace std;

constexpr int MAX_N = 100000;

array<int, 5> Data[MAX_N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> Data[i][j];
        }

        Data[i][1] = -Data[i][1];
        Data[i][3] = -Data[i][3];
    }

    sort(Data, Data + N);

    for (int i = 0; i < N; i++) {
        cout << Data[i][0] << ' '
             << -Data[i][1] << ' '
             << Data[i][2] << ' '
             << -Data[i][3] << ' '
             << Data[i][4] << '\n';
    }

    return 0;
}