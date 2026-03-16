#include <bits/stdc++.h>
using namespace std;

int main() {
    double km;
    cin >> km;

    double total = 0;

    if (km <= 1) {
        total = 15000;
    }

    else if (km <= 5) {
        total = 15000 + (km - 1) * 13500;
    }

    else if (km <= 120) {
        total = 15000 + 4 * 13500 + (km - 5) * 11000;
    }
    else {
        total = 15000 + 4 * 13500 + 115 * 11000 + (km - 120) * 11000;
        total = total * 0.9;
    }

    cout << fixed << setprecision(0) << total;

    return 0;
}