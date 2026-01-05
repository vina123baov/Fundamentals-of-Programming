#include <iostream>
using namespace std;

int main() {
    float canh;

    cout << "độ dài: ";
    cin >> canh;

    if (canh <=0) {
        cout << "cạnh > 0" << endl;
        return 1;
    }

    //chu vi + diện tích
    float chuvi = 4 * canh;
    float dientich = canh * canh;

    cout << "\n---Kết quả ---" << endl;
    cout << "cạnh hình vuông: " << canh << endl;
    cout << "chu vi hình vuông: " << chuVi << endl;
    cout << "diện tích hình vuông: " << dienTich << endl;

    return 0;
}