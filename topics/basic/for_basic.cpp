#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double avg = 0;
    int sum = 0;
    int cnt = 0;
    int arr[101] = {0};

    while (1) {
        int N;
        cin >> N;
        if (N>100 || N<0) {
            break;
        }
        arr[cnt] = N;
        cnt++;
    }

    for (int i=0; i<cnt; i++) {
        sum += arr[i];

    }

    if (cnt > 0) {
        avg = (double)sum / cnt; 
    }

    cout << "sum : " << sum << '\n';

    cout << fixed << setprecision(1);
    cout << "avg : " << avg << '\n';
    
    return 0;
}