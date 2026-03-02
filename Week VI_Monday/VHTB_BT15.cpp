#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

// BT1
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

// BT2
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

// BT5
void pt_bac1(long long a, long long b) {
    if (a == 0) {
        if (b == 0) cout << "Vo so nghiem\n";
        else        cout << "Vo nghiem\n";
    } else {
        cout << "x = " << (double)(-b) / a << '\n';
    }
}

// BT6
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

// BT7
void max_min_3so(long long a, long long b, long long c) {
    long long maxVal = (a >= b && a >= c) ? a : (b >= c ? b : c);
    long long minVal = (a <= b && a <= c) ? a : (b <= c ? b : c);
    cout << "So lon nhat : " << maxVal << '\n';
    cout << "So nho nhat : " << minVal << '\n';
}

// BT8
void dem_am_duong_khong(int n) {
    if (n <= 0) { cout << "n phai > 0!\n"; return; }
    int dem0 = 0, demAm = 0, demDuong = 0;
    for (int i = 1; i <= n; i++) {
        long long a;
        cout << "a" << i << " = ";
        cin >> a;
        if (a == 0)     dem0++;
        else if (a < 0) demAm++;
        else            demDuong++;
    }
    cout << "So bang 0  : " << dem0     << '\n';
    cout << "So am      : " << demAm    << '\n';
    cout << "So duong   : " << demDuong << '\n';
}

// BT9
void dem_chan_le(int n) {
    if (n <= 0) { cout << "n phai > 0!\n"; return; }
    int demChan = 0, demLe = 0;
    for (int i = 1; i <= n; i++) {
        long long a;
        cout << "So thu " << i << ": ";
        cin >> a;
        if (a % 2 == 0) demChan++;
        else            demLe++;
    }
    cout << "So chan : " << demChan << '\n';
    cout << "So le  : " << demLe   << '\n';
}

// BT10
void doc_so_tieng_anh(int n) {
    const string names[] = {
        "Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine",
        "Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen",
        "Seventeen","Eighteen","Nineteen","Twenty"
    };
    if (n >= 0 && n <= 20)
        cout << names[n] << '\n';
    else
        cout << "So khong hop le! Chi nhap tu 0 - 20.\n";
}

// BT11
void he_pt_2an(long long a, long long b, long long c,
               long long A, long long B, long long C) {
    long long D  = a * B - A * b;
    long long Dx = c * B - C * b;
    long long Dy = a * C - A * c;
    if (D != 0)
        cout << "x = " << (double)Dx / D << ", y = " << (double)Dy / D << '\n';
    else if (Dx == 0 && Dy == 0)
        cout << "Vo so nghiem\n";
    else
        cout << "Vo nghiem\n";
}

// BT12
long long tinh_Sm(int n, int m) {
    long long Sm = 0;
    for (int i = 1; i <= n; i++)
        Sm += (long long)round(pow(i, m));
    return Sm;
}

// BT13
long long tinh_Sm_max(int n, int m, long long M) {
    long long Sm = 0;
    for (int i = 1; i <= n; i++) {
        long long luythua = (long long)round(pow(i, m));
        if (Sm + luythua <= M) Sm += luythua;
        else break;
    }
    return Sm;
}

// BT14
void atm(long long sodu, long long sotienrut, int max_trial) {
    const string PIN = "123456";
    string reversePIN = PIN;
    reverse(reversePIN.begin(), reversePIN.end());

    string inputPIN;
    int count = 0;
    cin.ignore();

    while (count < max_trial) {
        cout << "Nhap ma PIN: ";
        getline(cin, inputPIN);

        if (inputPIN == reversePIN) {
            cout << "CANH BAO AN NINH! The bi khoa.\n";
            return;
        }
        if (inputPIN == PIN) break;

        count++;
        cout << "Sai PIN! Con " << max_trial - count << " lan.\n";
    }

    if (count == max_trial) {
        cout << "The bi khoa do nhap sai qua nhieu lan" << max_trial << " lan.\n";
        return;
    }
    if (sotienrut > sodu) {
        cout << "So tien rut lon hon so du!\n";
        return;
    }

    sodu -= sotienrut;
    cout << "===== HOA DON =====\n";
    cout << "So tien rut   : " << sotienrut << " VND\n";
    cout << "So du con lai : " << sodu      << " VND\n";
    cout << "===================\n";
}

// main
int main() {

    cout << "\n[BT1] Hinh vuong - nhap canh:\n";
    long long canh;
    cin >> canh;
    hinh_vuong(canh);

    cout << "\n[BT2] Hinh chu nhat - nhap chieu dai, chieu rong:\n";
    long long dai, rong;
    cin >> dai >> rong;
    hinh_chu_nhat(dai, rong);

    cout << "\n[BT5] PT bac 1 (ax + b = 0) - nhap a b:\n";
    long long a5, b5;
    cin >> a5 >> b5;
    pt_bac1(a5, b5);

    cout << "\n[BT6] PT bac 2 (ax^2 + bx + c = 0) - nhap a b c:\n";
    long long a6, b6, c6;
    cin >> a6 >> b6 >> c6;
    pt_bac2(a6, b6, c6);

    cout << "\n[BT7] Max-Min 3 so nguyen - nhap a b c:\n";
    long long a7, b7, c7;
    cin >> a7 >> b7 >> c7;
    max_min_3so(a7, b7, c7);

    cout << "\n[BT8] Dem am/duong/zero - nhap n:\n";
    int n8;
    cin >> n8;
    dem_am_duong_khong(n8);

    cout << "\n[BT9] Dem chan/le - nhap n:\n";
    int n9;
    cin >> n9;
    dem_chan_le(n9);

    cout << "\n[BT10] Doc so tieng Anh - nhap so (0-20):\n";
    int n10;
    cin >> n10;
    doc_so_tieng_anh(n10);

    cout << "\n[BT11] He PT 2 an - nhap a b c A B C:\n";
    long long a11, b11, c11, A11, B11, C11;
    cin >> a11 >> b11 >> c11 >> A11 >> B11 >> C11;
    he_pt_2an(a11, b11, c11, A11, B11, C11);

    cout << "\n[BT12] Tinh Sm = 1^m+...+n^m - nhap n m:\n";
    int n12, m12;
    cin >> n12 >> m12;
    cout << "Sm = " << tinh_Sm(n12, m12) << '\n';

    cout << "\n[BT13] Sm lon nhat <= M - nhap n m M:\n";
    int n13, m13;
    long long M13;
    cin >> n13 >> m13 >> M13;
    cout << "Sm lon nhat = " << tinh_Sm_max(n13, m13, M13) << '\n';

    cout << "\n[BT14] ATM - nhap so du, so tien rut, so lan PIN toi da:\n";
    long long sodu, sotienrut;
    int maxtrial;
    cin >> sodu >> sotienrut >> maxtrial;
    atm(sodu, sotienrut, maxtrial);

    return 0;
}
