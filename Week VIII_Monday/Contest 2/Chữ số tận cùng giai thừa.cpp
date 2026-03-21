#include <iostream>
using namespace std;

int lastNonZeroDigit(long long n) {
    if (n < 5) {
        int f[] = {1, 1, 2, 6, 4};
        return f[n];
    }

    int res = lastNonZeroDigit(n / 5);

    int pow2[] = {6, 2, 4, 8};
    int p = pow2[(n / 5) % 4];

    int f[] = {1, 1, 2, 6, 4};

    return (res * p * f[n % 5]) % 10;
}

int main() {
    long long n;
    cin >> n;
    cout << lastNonZeroDigit(n);
    return 0;
}
