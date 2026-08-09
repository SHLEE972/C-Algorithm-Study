#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    map<int, int> m;

    while (Q--) {
        char cmd;
        cin >> cmd;

        if (cmd == 'f') {
            int exist;
            cin >> exist;

            auto iterator = m.find(exist);

            if (iterator != m.end()) {
                cout << "YES " << iterator->second << '\n';
            } else {
                cout << "NO\n";
            }
        } else if (cmd == 'a') {
            int key;
            cin >> key;

            m[key]++;
        } else if (cmd == 'c') {
            cout << m.size() << '\n';
        }
    }

    return 0;
}