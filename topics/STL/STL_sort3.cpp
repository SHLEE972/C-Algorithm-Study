#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Student {
    int age;
    double height;
};

// 1차 출력 조건: 1순위 나이 내림차순, 2순위 키 내림차순
bool compare1(const Student& a, const Student& b) {
    if (a.age != b.age) {
        return a.age > b.age; // 나이 내림차순
    }
    return a.height > b.height; // 키 내림차순
}

// 2차 출력 조건: 1순위 키 오름차순, 2순위 나이 오름차순
bool compare2(const Student& a, const Student& b) {
    if (a.height != b.height) {
        return a.height < b.height; // 키 오름차순
    }
    return a.age < b.age; // 나이 오름차순
}

int main() {
    // 입출력 성능 향상 및 소수점 포맷 설정
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(1);
    
    int N;
    if (!(cin >> N)) return 0;
    
    vector<Student> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i].age >> arr[i].height;
    }
    
    // 1. 나이 내림차순 -> 키 내림차순 정렬 및 출력
    sort(arr.begin(), arr.end(), compare1);
    for (int i = 0; i < N; i++) {
        cout << arr[i].age << " " << arr[i].height << '\n';
    }
    
    cout << '\n'; // 요구사항: 줄 바꿈 한 번 더
    
    // 2. 키 오름차순 -> 나이 오름차순 정렬 및 출력
    sort(arr.begin(), arr.end(), compare2);
    for (int i = 0; i < N; i++) {
        cout << arr[i].age << " " << arr[i].height << '\n';
    }
    
    return 0;
}
