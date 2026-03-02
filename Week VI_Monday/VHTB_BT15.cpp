#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

// BT1: Tính chu vi và diện tích hình vuông
void hinh_vuong(long long canh) {
    if (canh <= 0) {
        cout << "Canh phai > 0\n";
        return;
    }
    long long chuvi    = 4 * canh;
    long long dientich = canh * canh;
    cout << "Chu vi    : " << chuvi    << '\n';
    cout << "Dien tich : " << dientich << '\n';
}

// BT2: Tính chu vi, diện tích, đường chéo hình chữ nhật
void hinh_chu_nhat(long long chieuDai, long long chieuRong) {
    if (chieuDai <= 0 || chieuRong <= 0) {
        cout << "Chieu dai va chieu rong phai > 0\n";
        return;
    }
    long long chuVi    = 2 * (chieuDai + chieuRong);
    long long dientTich = chieuDai * chieuRong;
    double duongCheo   = sqrt(chieuDai * chieuDai + chieuRong * chieuRong);
    cout << "Chu vi    : " << chuVi    << '\n';
    cout << "Dien tich : " << dientTich << '\n';
    cout << "Duong cheo: " << duongCheo << '\n';
}

// BT5: Giải phương trình bậc 1: ax + b = 0
void pt_bac1(long long a, long long b) {
    if (a == 0) {
        if (b == 0) cout << "Vo so nghiem\n";
        else        cout << "Vo nghiem\n";
    } else {
        cout << "x = " << (double)(-b) / a << '\n';
    }
}

// BT6: Giải phương trình bậc 2: ax^2 + bx + c = 0
void pt_bac2(long long a, long long b, long long c) {
    if (a == 0) {
        pt_bac1(b, c);
        return;
    }
    double delta = (double)b * b - 4.0 * a * c;
    if (delta < 0)
        cout << "Vo nghiem\n";
    else if (delta == 0)
        cout << "Nghiem kep x = " << (double)(-b) / (2 * a) << '\n';
    else {
        cout << "x1 = " << ((double)(-b) + sqrt(delta)) / (2 * a) << '\n';
        cout << "x2 = " << ((double)(-b) - sqrt(delta)) / (2 * a) << '\n';
    }
}