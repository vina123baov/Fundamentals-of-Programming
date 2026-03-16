#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    bool cong = (2 * b == a + c);
    bool nhan = (b * b == a * c);

    if (cong && nhan) {
        cout << "CAPSO_CONG_VA_NHAN";
    } else if (cong) {
        cout << "CAPSO_CONG";
    } else if (nhan) {
        cout << "CAPSO_NHAN";
    } else {
        cout << "KHONG_THUOC_CAPSO";
    }

    return 0;
}