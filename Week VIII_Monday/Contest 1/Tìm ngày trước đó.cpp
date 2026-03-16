#include <bits/stdc++.h>
using namespace std;

bool nhuan(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int maxDay(int m, int y) {
    if (m == 2) return nhuan(y) ? 29 : 28;
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    return 31;
}

int main() {
    int d, m, y;
    cin >> d >> m >> y;

    d--;
    if (d < 1) {
        m--;
        if (m < 1) {
            m = 12;
            y--;
        }
        d = maxDay(m, y);
    }

    cout << d << " " << m << " " << y;
    return 0;
}