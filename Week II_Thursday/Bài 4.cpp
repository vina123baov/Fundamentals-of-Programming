void bai4_he_phuong_trinh() {
    cout << "\n================================================" << endl;
    cout << "BAI 4: Giai he phuong trinh bac nhat 2 an" << endl;
    cout << "  ax  + by  = c" << endl;
    cout << "  a'x + b'y = c'" << endl;
    cout << "================================================" << endl;
    
    double a, b, c, a1, b1, c1;
    
    cout << "Nhap he so phuong trinh 1 (ax + by = c):" << endl;
    cout << "  a = "; cin >> a;
    cout << "  b = "; cin >> b;
    cout << "  c = "; cin >> c;
    
    cout << "Nhap he so phuong trinh 2 (a'x + b'y = c'):" << endl;
    cout << "  a' = "; cin >> a1;
    cout << "  b' = "; cin >> b1;
    cout << "  c' = "; cin >> c1;
    
    cout << "\nHe phuong trinh:" << endl;
    cout << "  " << a << "x + " << b << "y = " << c << endl;
    cout << "  " << a1 << "x + " << b1 << "y = " << c1 << endl;
    
    // (phương pháp Cramer)
    double D = a * b1 - a1 * b;
    double Dx = c * b1 - c1 * b;
    double Dy = a * c1 - a1 * c;
    
    cout << "\nDinh thuc:" << endl;
    cout << "  D  = a*b' - a'*b = " << D << endl;
    cout << "  Dx = c*b' - c'*b = " << Dx << endl;
    cout << "  Dy = a*c' - a'*c = " << Dy << endl;
    
    if (D != 0) {
        double x = Dx / D;
        double y = Dy / D;
        cout << "\nHe co nghiem duy nhat:" << endl;
        cout << "  x = Dx/D = " << x << endl;
        cout << "  y = Dy/D = " << y << endl;
    } else {
        if (Dx == 0 && Dy == 0) {
            cout << "\nHe phuong trinh vo so nghiem (hai phuong trinh trung nhau)" << endl;
        } else {
            cout << "\nHe phuong trinh vo nghiem (hai duong thang song song)" << endl;
        }
    }
}

// main program to run all exercises
int main() {
    int choice;
    
    do {
        cout << "\n================================================" << endl;
        cout << "CHUONG TRINH GIAI CAC BAI TOAN" << endl;
        cout << "================================================" << endl;
        cout << "1. Tim gia tri nho nhat cua 3 so" << endl;
        cout << "2. Giai phuong trinh bac nhat ax + b = 0" << endl;
        cout << "3. Giai phuong trinh bac hai ax^2 + bx + c = 0" << endl;
        cout << "4. Giai he phuong trinh bac nhat 2 an" << endl;
        cout << "0. Thoat" << endl;
        cout << "================================================" << endl;
        cout << "Chon bai (1-4, 0 de thoat): ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                bai1_tim_min();
                break;
            case 2:
                bai2_phuong_trinh_bac_nhat();
                break;
            case 3:
                bai3_phuong_trinh_bac_hai();
                break;
            case 4:
                bai4_he_phuong_trinh();
                break;
            case 0:
                cout << "Tam biet!" << endl;
                break;
            default:
                cout << "Lua chon khong hop le!" << endl;
        }
    } while (choice != 0);
    
    return 0;
}