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
        cout << "Nhap n (>= 1): ";
        cin >> n;
    } while (n < 1);

    cout << n << " so nguyen to dau tien: ";
    int dem = 0;
    int so = 2;
    while (dem < n) {
        if (laSoNguyenTo(so)) {
            cout << so << " ";
            dem++;
        }
        so++;
    }
    cout << endl;

    return 0;
}
