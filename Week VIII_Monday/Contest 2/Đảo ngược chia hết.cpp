#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long rev = 0, tmp = n;
    while (tmp > 0) {
        rev = rev * 10 + tmp % 10;
        tmp /= 10;
    }

    if (rev % n == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}