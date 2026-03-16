#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    for (int a = 1; a <= n; a++)
        for (int b = a + 1; b <= n; b++)
            for (int c = b + 1; c <= n; c++) {
                int d = n - a - b - c;
                if (d > c)
                    cnt++;
            }

    cout << cnt;
    return 0;
}
