#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long limit = sqrt(n);

    vector<bool> prime(limit + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 1; i * i <= limit; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                prime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 1; i <= limit; i++) {
        if (prime[i]) count++;
    }

    cout << count;
    return 0;
}
