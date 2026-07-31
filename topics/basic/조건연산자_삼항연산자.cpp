#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    cout << (N%2 == 0 ? "Even" : "Odd");

    return 0;
}