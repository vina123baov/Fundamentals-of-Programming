#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    float max, min;
    
    cout << "Nhập 3 số thực: ";
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

    cout << "Số lớn nhất: " << max << endl;
    cout << "Số nhỏ nhất: " << min << endl;

    return 0;
}