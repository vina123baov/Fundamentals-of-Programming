#include <bits/stdc++.h>
using namespace std;

int main() {
    double toan, van, anh;
    cin >> toan >> van >> anh;

    if (toan < 0 || toan > 10 || van < 0 || van > 10 || anh < 0 || anh > 10) {
        cout << "KHONGHOPLE";
        return 0;
    }

    double tb = (toan + van + anh) / 3.0;
    double minDiem = min({toan, van, anh});

    if (tb >= 8 && minDiem >= 6.5) {
        cout << "GIOI";
    } else if (tb >= 6.5 && minDiem >= 5) {
        cout << "KHA";
    } else if (tb >= 5 && minDiem >= 3.5) {
        cout << "TRUNGBINH";
    } else {
        cout << "YEU";
    }

    return 0;
}