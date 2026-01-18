void bai2_phuong_trinh_bac_nhat() {
    cout << "\n================================================" << endl;
    cout << "BAI 2: Giai phuong trinh ax + b = 0" << endl;
    cout << "================================================" << endl;
    
    double a, b;
    cout << "Nhap he so a: "; cin >> a;
    cout << "Nhap he so b: "; cin >> b;
    
    cout << "Phuong trinh: " << a << "x + " << b << " = 0" << endl;
    
    if (a == 0) {
        if (b == 0) {
            cout << "Phuong trinh vo so nghiem" << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    } else {
        double x = -b / a;
        cout << "Nghiem: x = " << x << endl;
    }
}


