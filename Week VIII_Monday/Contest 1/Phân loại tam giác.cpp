#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "KHONGHOPLE";
        return 0;
    }

    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    bool deu = (a == b && b == c);
    bool can = (a == b || b == c || a == c);
    bool vuong = (a * a + b * b == c * c);

    if (deu) {
        cout << "TAMGIAC_DEU";
    } else if (vuong && can) {
        cout << "TAMGIAC_VUONG_CAN";
    } else if (vuong) {
        cout << "TAMGIAC_VUONG";
    } else if (can) {
        cout << "TAMGIAC_CAN";
    } else {
        cout << "TAMGIAC_THUONG";
    }

    return 0;
}