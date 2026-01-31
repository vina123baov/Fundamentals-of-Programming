#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    cout << "Gia tri be nhat la: " << min;
    return 0;
}
