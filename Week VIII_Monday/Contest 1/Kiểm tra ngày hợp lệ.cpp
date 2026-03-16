#include <bits/stdc++.h>
using namespace std;

int main() {
    long long d, m, y;
    cin >> d >> m >> y;

    if (y < 1) {
        cout << "KHONGHOPLE";
        return 0;
    }

    if (m < 1 || m > 12) {
        cout << "KHONGHOPLE";
        return 0;
    }

    bool nhuan = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);

    int maxDay;
    if (m == 2) {
        maxDay = nhuan ? 29 : 28;
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        maxDay = 30;
    } else {
        maxDay = 31;
    }

    if (d >= 1 && d <= maxDay)
        cout << "HOPLE";
    else
        cout << "KHONGHOPLE";

    return 0;
}