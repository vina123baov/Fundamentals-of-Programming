#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    if (a == 0) {
        if (b == 0)
            cout << "Vo so nghiem\n";
        else
            cout << "Vo nghiem\n";
    } else {
        double x = -b / a;
        cout << "x = " << x << endl;
    }

    return 0;
}
