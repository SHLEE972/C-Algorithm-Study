#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char N,M;
    cin >> N >> M;
    cout << abs((int)N+(int)M) << " " << abs((int)N-(int)M) << '\n';

    return 0;
}