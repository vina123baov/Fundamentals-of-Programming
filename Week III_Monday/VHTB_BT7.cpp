#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    float max, min;
    
    cout << "nhap 3 so thuc: ";
    cin >> a >> b >> c;
    
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }
    
    if (a <= b && a <= c) {
        min = a;
    } else if (b <= a && b <= c) {
        min = b;
    } else {
        min = c;
    }

    cout << "So lon nhat: " << max << endl;
    cout << "So nho nhat: " << min << endl;

    return 0;
}