#include <bits/stdc++.h>
using namespace std;

int countDiv(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (i != n / i) cnt++;
        }
    }
    return cnt;
}

int main() {
    int k;
    cin >> k;

    for (int n = 1; ; n++) {
        if (countDiv(n) == k) {
            cout << n;
            return 0;
        }
    }
}