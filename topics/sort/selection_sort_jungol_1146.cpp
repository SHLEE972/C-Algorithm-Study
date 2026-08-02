#include <iostream>
#include <vector>
using namespace std;




int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int N;
    cin >> N;
    vector <int> arr;
    for (int i=0; i<N; i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    
    int n = N;
    for (int cycle=0; cycle<n-1; cycle++) {
        int minIdx = cycle;
        for (int i = cycle+1; i < n; i++) {
            if (arr[minIdx] > arr[i]) {
                minIdx = i;
            }
        }
        int tmp = arr[cycle];
        arr[cycle] = arr[minIdx];
        arr[minIdx] = tmp;
        
        for (int j=0; j<N; j++) {
            cout << arr[j] << " ";
        }
        cout << '\n';
    }




    return 0;
}