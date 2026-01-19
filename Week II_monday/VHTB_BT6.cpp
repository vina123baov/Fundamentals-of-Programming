#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                cout << "Vo so nghiem\n";
            else
                cout << "Vo nghiem\n";
        } else {
            double x = -c / b;
            cout << "x = " << x << endl;
        }
    } else {
        double delta = b * b - 4 * a * c;

        if (delta < 0) {
            cout << "Vo nghiem\n";
        } else if (delta == 0) {
            double x = -b / (2 * a);
            cout << "Nghiem kep x = " << x << endl;
        } else {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }

    return 0;
}
