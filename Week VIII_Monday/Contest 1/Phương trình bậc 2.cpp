#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                cout << "VOSONGHIEM";
            else
                cout << "VONGHIEM";
        } else {
            double x = -c / b;
            cout << "x = " << fixed << setprecision(2) << x;
        }
    } else {
        double delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "VONGHIEM";
        } else if (delta == 0) {
            double x = -b / (2 * a);
            cout << "x = " << fixed << setprecision(2) << x;
        } else {
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);
            if (x1 > x2) swap(x1, x2);
            cout << fixed << setprecision(2);
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2;
        }
    }

    return 0;
}