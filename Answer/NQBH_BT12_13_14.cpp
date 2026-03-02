#include <cmath>
#include <iostream>
using namespace std;


void print_hello() {
    cout << "Hello, world!" << endl;
}

int main() {
    for (int i = 0; i < 5; ++i) print_hello();
}



int main() {
	// problem 12
	double Sm = 0; // khai báo biến Sm & khởi tạo giá trị 0. kiểu dữ liệu double vì khi m < 0, Sm là số thực
	int m, n;
	cin >> m >> n;
	if (m == 0) Sm = n;
	for (int i = 1; i <= n; ++i) Sm += pow(i, m);
	cout << "Sm = " << Sm << '\n';

	// problem 13
	// 1st solution
	Sm = 0; // khai báo biến Sm & khởi tạo giá trị 0. kiểu dữ liệu double vì khi m < 0, Sm là số thực
	int M, i = 1;
	cin >> m >> M;
	while (Sm <= M) {
		Sm += pow(i, m);
		++i;
	}
	cout << Sm - pow(i, m);

	// 2nd solution
	Sm = 0;
	for (i = 1; i <= 10000; ++i) {
		if (Sm > M) break;
		else Sm += pow(i, m);
	}
	cout << Sm - pow(i, m);

	// problem 14
	double A, a;
	cin >> A >> a;
	if (a > A) cout << "Số tiền rút lớn hơn số dư khả dụng. Bạn bị ảo tưởng sức mạnh tài chính à?";
	else {
		string real_password, input_password;
		cin >> real_password; // 6 digits, from 0 to 9
		int max_trial;
		cin >> max_trial;
		bool ok = false;
		for (int i = 1; i <= 5; ++i) {
			cin >> input_password;
			if (input_password == real_password) {
				ok = true;
				break;
			}
		}
		if (ok) cout << "Mã PIN đúng. Cho rút tiền.\n";
		else cout << "Bạn đã bị khóa thẻ.\n";
	}
}