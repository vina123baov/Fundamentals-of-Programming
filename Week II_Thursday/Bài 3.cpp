void bai3_phuong_trinh_bac_hai() {
    cout << "\n================================================" << endl;
    cout << "BAI 3: Giai phuong trinh ax^2 + bx + c = 0" << endl;
    cout << "================================================" << endl;
    
    double a, b, c;
    cout << "Nhap he so a: "; cin >> a;
    cout << "Nhap he so b: "; cin >> b;
    cout << "Nhap he so c: "; cin >> c;
    
    cout << "Phuong trinh: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
    
    if (a == 0) {
        // Trở thành phương trình bậc nhất
        cout << "(a = 0, day la phuong trinh bac nhat)" << endl;
        if (b == 0) {
            if (c == 0) {
                cout << "Phuong trinh vo so nghiem" << endl;
            } else {
                cout << "Phuong trinh vo nghiem" << endl;
            }
        } else {
            double x = -c / b;
            cout << "Nghiem: x = " << x << endl;
        }
    } else {
        // Phương trình bậc hai
        double delta = b*b - 4*a*c;
        cout << "Delta = " << delta << endl;
        
        if (delta < 0) {
            cout << "Phuong trinh vo nghiem (trong tap so thuc)" << endl;
            // Nghiệm phức
            double real_part = -b / (2*a);
            double imag_part = sqrt(-delta) / (2*a);
            cout << "Nghiem phuc: x1 = " << real_part << " + " << imag_part << "i" << endl;
            cout << "            x2 = " << real_part << " - " << imag_part << "i" << endl;
        } else if (delta == 0) {
            double x = -b / (2*a);
            cout << "Phuong trinh co nghiem kep: x = " << x << endl;
        } else {
            double x1 = (-b + sqrt(delta)) / (2*a);
            double x2 = (-b - sqrt(delta)) / (2*a);
            cout << "Phuong trinh co 2 nghiem phan biet:" << endl;
            cout << "  x1 = " << x1 << endl;
            cout << "  x2 = " << x2 << endl;
        }
    }
}


