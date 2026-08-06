#include <iostream>

using namespace std;

struct Data {
    int width, height;
    bool operator < (const Data& Right) const {
        return width < Right.width;
    }
    bool operator == (const Data& Right) const {
        return width == Right.width && height == Right.height;
    }
    Data operator + (const Data& Right) const {
        return Data{width + Right.width, height + Right.height};
    }
};
Data a,b,c,d;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> a.width >> a.height;
    cin >> b.width >> b.height;
    cin >> c.width >> c.height;
    cin >> d.width >> d.height;

    int Area_ab = (a.width + b.width) * (a.height + b.height); 
    int Area_cd = (c.width + d.width) * (c.height + d.height);

    if (Area_ab == Area_cd) {
        cout << "Same" << '\n';
    }

    else if (Area_ab < Area_cd) {
        cout << "Left Small" << '\n';
    }

    else {
        cout << "Right Small" << '\n';
    }
    return 0;
}