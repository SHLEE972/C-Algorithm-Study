#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    switch (N)
    {
    case 1:
        cout << "dog" << '\n';
        break;
    case 2:
        cout << "cat" << '\n';
        break;

    case 3:
        cout << "chick" << '\n';
        break;
    default:
        cout << "blank" << '\n';
        break;
    }

    return 0;
}