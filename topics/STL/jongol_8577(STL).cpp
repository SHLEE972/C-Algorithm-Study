#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Meeting {
    int start;
    int end;
    int id;     // 회의 번호
    int length; // 회의 길이
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;

    vector<Meeting> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i].start >> arr[i].end;
        arr[i].id = i + 1; // 문제의 회의 번호가 1번부터 시작할 경우 (0번부터면 i로 변경)
        arr[i].length = arr[i].end - arr[i].start;
    }

    // 정렬 조건 설정
    sort(arr.begin(), arr.end(), [](const Meeting& a, const Meeting& b) {
        if (a.length != b.length) {
            return a.length < b.length; // 1순위: 회의 길이 오름차순
        }
        return a.start < b.start;       // 2순위: 시작 시간 오름차순
    });

    for (int i = 0; i < N; i++) {
        cout << arr[i].id << '\n';
    }

    return 0;
}
