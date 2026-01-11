#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float chieudai, chieurong;

    cout << "chiều dài hình cn: ";
    cin >> chieudai;
    cout << "chiều rộng hình cn: ";
    cin >> chieurong;

    if (chieudai <=0 || chieurong <=0) {
        cout << "chiều dài và chiều rộng > 0" <<endl;
        return 1; 
    }

    float chuvi = 2 * (chieudai + chieurong);
    float dientich = chieudai * chieurong;
    float duongcheo = sqrt(chieudai * chieudai + chieurong * chieurong);

    cout << "\n---Kết quả ---" << endl;
    cout << "chiều dài: " << chieuDai << endl;
    cout << "chiều rộng: " << chieuRong << endl;
    cout << "chu vi hình chữ nhật: " << chuVi << endl;
    cout << "diện tích hình chữ nhật: " << dientTich << endl;
    cout << "độ dài đường chéo: " << duongCheo << endl;

    return 0;
}
