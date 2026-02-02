#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string PIN = "123456";
    string inputPIN, reversePIN;
    int max_trial, count = 0;
    long long A, a;
    
    cout << "Nhap so du tai khoan: "; cin >> A;
    cout << "Nhap so tien muon rut: "; cin >> a;
    cout << "Nhap so lan nhap PIN toi da: "; cin >> max_trial;
    cin.ignore();
    
    reversePIN = PIN;
    reverse(reversePIN.begin(), reversePIN.end());
    
    while (count < max_trial) {
        cout << "Nhap ma PIN: ";
        getline(cin, inputPIN);
        
        if (inputPIN == reversePIN) {
            cout << "CANH BAO AN NINH! The bi khoa." << endl;
            return 0;
        }
        
        if (inputPIN == PIN) break;
        
        count++;
        cout << "Sai PIN! Con " << max_trial - count << " lan." << endl;
    }
    
    if (count == max_trial) {
        cout << "The bi khoa do nhap sai qua " << max_trial << " lan." << endl;
        return 0;
    }
    
    if (a > A) {
        cout << "So tien rut lon hon so du. Ban bi ao tuong suc manh tai chinh a?" << endl;
        return 0;
    }
    
    A = A - a;
    cout << "\n===== HOA DON =====" << endl;
    cout << "So tien rut: " << a << " VND" << endl;
    cout << "So du con lai: " << A << " VND" << endl;
    cout << "===================" << endl;
    
    return 0;
}