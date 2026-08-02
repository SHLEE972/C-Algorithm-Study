#include <iostream>
#include <string>
using namespace std;

typedef struct A {
    string name;
    string tel;
    string addr;
}A;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    A a;
    cin >> a.name >> a.tel >> a.addr;
    cout << "name : " << a.name << '\n';
    cout << "tel : " << a.tel << '\n';
    cout << "addr : " << a.addr << '\n';
    

    return 0;
}