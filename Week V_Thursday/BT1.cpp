#include <iostream>
#include <cmath>
using namespace std;

bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;

    do {
        cout << "Nhap n (>= 2): ";
        cin >> n;
    } while (n < 2);

    cout << "Cac so nguyen to <= " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (laSoNguyenTo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
