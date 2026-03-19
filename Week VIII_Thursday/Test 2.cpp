#include <iostream>
using namespace std;

struct huuti {
	int tu, mau;
};

huuti tong(huuti, huuti);
void nhap_huuti(huuti&);
void xuat_huuti(huuti);

void main()
{
	huuti a, b, c;
	cout << "nhap so huu ti a: ";
	nhap_huuti(a);
	cout << "nhap so huu ti b: ";
	nhap_huuti(b);
	cout << "nhap so huu ti c: ";
	nhap_huuti(c);
	huuti kq;
	kq = tong(tong(a, b), c);
	cout << "a + b + c = ";
	xuat_huuti(kq);
	cout << endl;
}

huuti tong(huuti a, huuti b)
{
	huuti t;
	t.mau = a.mau * b.mau;
	t.tu = a.tu * b.mau + a.mau * b.tu;
	return t;
}

void nhap_huuti(huuti& a)
{
	cin >> a.tu >> a.mau;
}

void xuat_huuti(huuti a)
{
	cout << a.tu << "/" << a.mau;
}