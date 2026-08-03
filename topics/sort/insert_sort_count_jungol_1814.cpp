#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> arr;
    int count = 0;

    for (int i=0; i<N; i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    for (int i=1; i<N; i++) {
        int target = arr[i];
        int j = i -1;


        while (j >=0 && arr[j] > target) {
            arr[j+1] = arr[j];
            j--;
            count++;
        }
        arr[j+1] = target;

        
    }
    cout << count << '\n';
    return 0;
}