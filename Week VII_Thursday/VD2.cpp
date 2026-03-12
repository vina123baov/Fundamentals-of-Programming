#include <iostream>
using namespace std;

struct Vector {
    float x, y, z;
};

void nhap(Vector &v) {
    cout << "Nhap x: ";
    cin >> v.x;
    cout << "Nhap y: ";
    cin >> v.y;
    cout << "Nhap z: ";
    cin >> v.z;
}

Vector tong(Vector u, Vector v) {
    Vector kq;
    kq.x = u.x + v.x;
    kq.y = u.y + v.y;
    kq.z = u.z + v.z;
    return kq;
}

float tichVoHuong(Vector u, Vector v) {
    return u.x * v.x + u.y * v.y + u.z * v.z;
}

int main() {
    Vector u, v, s;

    cout << "Nhap vector u:\n";
    nhap(u);

    cout << "Nhap vector v:\n";
    nhap(v);

    s = tong(u, v);

    cout << "Tong u + v = (" << s.x << ", " << s.y << ", " << s.z << ")" << endl;

    float t = tichVoHuong(u, v);
    cout << "Tich vo huong u.v = " << t << endl;

    return 0;
}