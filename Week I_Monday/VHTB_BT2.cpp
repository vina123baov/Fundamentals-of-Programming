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
    cout << "chiều dài: " << chieudai << endl;
    cout << "chiều rộng: " << chieurong << endl;
    cout << "chu vi hình chữ nhật: " << chuvi << endl;
    cout << "diện tích hình chữ nhật: " << dientich << endl;
    cout << "độ dài đường chéo: " << duongcheo << endl;

    return 0;
}
