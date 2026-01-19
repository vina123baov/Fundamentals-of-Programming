#include <iostream>
using namespace std;

int main() {
    int n;
    int a;
    int demChan = 0, demLe = 0;
    
    cout << "Nhập n (n > 0): ";
    cin >> n;
    
    if (n <= 0) {
        cout << "n > 0!" << endl;
        return 1;
    }
    
    cout << "Nhập " << n << " số nguyên:" << endl;
    
    for (int i = 1; i <= n; ++i) {
        cout << "Số thứ " << i << ": ";
        cin >> a;
        
        if (a % 2 == 0) {
            demChan++;
        } else {
            demLe++;
        }
    }
    
    cout << "\nKết quả:" << endl;
    cout << "Số số chẵn: " << demChan << endl;
    cout << "Số số lẻ: " << demLe << endl;
    
    return 0;
}