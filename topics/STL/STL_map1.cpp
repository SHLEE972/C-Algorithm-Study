#include <iostream>
#include <map>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, int> m;
    int value = 1;
    while (true) {
        string key;

        cin >> key;
        if (key == "end") {
            break;
        }
        m[key] = value;
        
        value++;
    }

    cout << m.size() << '\n';
    for (auto [key, value] : m) {
        cout << key << ' ' << value << '\n';
    }


    return 0;
}