#include <iostream>
#include <cmath>
using namespace std;

void bai1_tim_min() {
    cout << "================================================" << endl;
    cout << "BAI 1: Tim gia tri nho nhat cua 3 so" << endl;
    cout << "================================================" << endl;
    
    int a, b, c;
    cout << "Nhap so a: "; cin >> a;
    cout << "Nhap so b: "; cin >> b;
    cout << "Nhap so c: "; cin >> c;
    
    int min_val = a;
    if (b < min_val) min_val = b;
    if (c < min_val) min_val = c;
    
    cout << "Gia tri nho nhat cua (" << a << ", " << b << ", " << c << ") la: " << min_val << endl;
}


