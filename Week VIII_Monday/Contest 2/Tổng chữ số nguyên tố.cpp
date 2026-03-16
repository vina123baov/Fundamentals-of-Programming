#include <bits/stdc++.h>
using namespace std;

int sumDigits(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int L, R;
    cin >> L >> R;

    int cnt = 0;
    for (int i = L; i <= R; i++) {
        if (isPrime(sumDigits(i)))
            cnt++;
    }

    cout << cnt;
    return 0;
}