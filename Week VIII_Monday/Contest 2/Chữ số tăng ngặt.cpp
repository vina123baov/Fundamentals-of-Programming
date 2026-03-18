#include <bits/stdc++.h>
using namespace std;

bool isStrictlyIncreasing(int n) {
    int prev = 10; // lon hon moi chu so
    while (n > 0) {
        int d = n % 10;
        if (d >= prev) return false;
        prev = d;
        n /= 10;
    }
    return true;
}

int main() {
    int L, R;
    cin >> L >> R;

    int cnt = 0;
    for (int i = L; i <= R; i++) {
        if (isStrictlyIncreasing(i))
            cnt++;
    }

    cout << cnt;
    return 0;
}