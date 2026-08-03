#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int>arr;

    for (int i=0; i<N; i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    for (int end=N-1; end>0; end--) {
        for (int cur=0; cur<end; cur++) {
            if (arr[cur]>arr[cur+1]) {
                int tmp = arr[cur+1];
                arr[cur+1] = arr[cur];
                arr[cur] = tmp;
            }
        }
        for (int i=0; i<N; i++) {
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
return 0;
}