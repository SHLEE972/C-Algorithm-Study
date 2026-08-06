#include <iostream>
#include <string>
#include <array>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int age;
};
array<Student, 10> students;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (auto &[name, age] : students) {
        cin >> name >> age;
    }

    sort(students.begin(), students.end(), [](const Student &a, const Student &b) {
        if (a.age != b.age) {
            return a.age > b.age; // 나이 내림차순
        }
        return a.name < b.name; // 이름 오름차순
    });

    for (auto &[name, age] : students) {
        cout << name << ' ' << age << '\n';
    }

    return 0;
}