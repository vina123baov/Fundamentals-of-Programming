#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    char op;
    cin >> a >> op >> b;
    if (op == '/' && b == 0) {
        cout << "LOI_PHEP_TINH";
    } else {
        double res;
        if (op == '+') res = a + b;
        else if (op == '-') res = a - b;
        else if (op == '*') res = a * b;
        else res = a / b;
        cout << fixed << setprecision(2) << res;
    }
    return 0;
}