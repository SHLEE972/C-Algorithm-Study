#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,X;
    cin >> N >> X;
    vector<int> v(N, X);

    char cmd;
    while (1) {
        cin >> cmd;
        if (cmd == 'i'){
            int a;
            cin >> a;
            v.push_back(a);
        }
        else if (cmd == 'r'){
            if (!v.empty()) {
                v.pop_back();
            }
        }
        else if (cmd == 's'){
            sort(v.begin(), v.end());
        }
        else if (cmd == 't'){
            if (!v.empty()) {
                auto tmp = v.back();
                v.back() = v.front();
                v.front() = tmp;
            }
        }
        else if (cmd == 'e') {
            for (auto& i : v) {
                cout << i << ' ';
            }
            cout << '\n';
            break;
        }
    }

    return 0;
}