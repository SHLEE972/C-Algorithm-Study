#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> v;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long diff = 1000000000;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < N-1; i++) {
        if(diff > v[i+1] - v[i]) {
            diff = v[i+1] - v[i];
        }
    }
    cout << diff << "\n";
    return 0;
}