#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> vec;

    while (1) {
        int N;
        cin >> N;
        if (N==0) { 
            break;
        }
        vec.push_back(N);
    }
    cout << vec.size() << '\n';
    for (int i=0; i<vec.size(); i++) {
        if (vec[i]%2 == 0) {
            vec[i] = vec[i] / 2;
            cout << vec [i] << " ";
        }
        else { cout << vec[i]*2 << " "; }
    }

    return 0;
}