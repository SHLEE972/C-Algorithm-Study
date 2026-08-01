#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char arr[10]={0};
    for (int i=0; i<10; i++) {
        cin >> arr[i];
    }
    for (int i=9; i>=0; i--) {
        cout << arr[i] << " ";
    }
    cout << '\n';
    
    return 0;
}