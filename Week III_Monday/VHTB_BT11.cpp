#include <iostream>
using namespace std;

int main() {
    float a, b, c, A, B, C;
    float D, Dx, Dy;
    
    cout << "Nhập hệ số phương trình 1 (ax + by = c):" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    
    cout << "\nNhập hệ số phương trình 2 (Ax + By = C):" << endl;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "C = ";
    cin >> C;
    
    D = a * B - A * b;
    Dx = c * B - C * b;
    Dy = a * C - A * c;
    
    cout << "\nHệ phương trình:" << endl;
    cout << a << "x + " << b << "y = " << c << endl;
    cout << A << "x + " << B << "y = " << C << endl;
    
    if (D != 0) {   
        float x = Dx / D;
        float y = Dy / D;
        cout << "\nHệ có nghiệm duy nhất:" << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    } else {
        if (Dx == 0 && Dy == 0) {
            cout << "\nHệ có vô số nghiệm" << endl;
        } else {
            cout << "\nHệ vô nghiệm" << endl;
        }
    }
    
    return 0;
}