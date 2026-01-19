#include <iostream>
using namespace std;

int main() {
    int n;
    float a;
    int dem0 = 0, demAm = 0, demDuong = 0;
    
    cout << "Nhập n (n > 0): ";
    cin >> n;
    
    if (n <= 0) {
        cout << "n > 0!" << endl;
        return 1;
    }
    
    cout << "Nhập " << n << " số thực:" << endl;
    
    for (int i = 1; i <= n; ++i) {
        cout << "a" << i << " = ";
        cin >> a;
        
        if (a == 0) {
            dem0++;
        } else if (a < 0) {
            demAm++;
        } else {
            demDuong++;
        }
    }
    
    cout << "\nKết quả:" << endl;
    cout << "Số số 0: " << dem0 << endl;
    cout << "Số số âm: " << demAm << endl;
    cout << "Số số dương: " << demDuong << endl;

    return 0;
}