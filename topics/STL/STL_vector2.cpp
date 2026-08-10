#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; i++) {
        int v_length;
        cin >> v_length;
        for (int j = 0; j < v_length; j++) {
            int value;
            cin >> value;
            v[i].push_back(value);
        }
    
    }
    for (int i = 0; i < N; i++) {
        int sun;
        cin >> sun;
        for (int j = 0; j < v[sun].size(); j++) {
            cout << v[sun][j] << ' ';
        }
        cout << '\n';
    }
        

    return 0;
}