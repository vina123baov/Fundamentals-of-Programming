// chương trình tính tổng của dãy số hữu tỉ (tối đa là 100 phần tử):
#include <iostream>
using namespace std;

struct huuti {
	int tu, mau;
};

struct day_huuti {
	int n;
	huuti a[100];
};

huuti tong(huuti, huuti);
void nhap_huuti(huuti&);
void xuat_huuti(huuti);

void nhap_day_huuti(day_huuti&);
huuti tong_day(day_huuti);

int uscln(int, int);    

void main()
{
	day_huuti D;
	cout << "nhap day so huu ti: ";
	nhap_day_huuti(D);
	huuti kq;
	kq = tong_day(D);
	cout << "Tong cua day la: ";
	xuat_huuti(kq);
	cout << endl;
}

huuti tong(huuti a, huuti b)
{
	huuti t;
	int d;
	t.mau = a.mau * b.mau;
	t.tu = a.tu * b.mau + a.mau * b.tu;
	d = uscln(t.tu, t.mau);
	t.tu /= d;   t.mau /= d;
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

void nhap_day_huuti(day_huuti& D)
{
	cout << "Cho biet so phan tu cua day: ";
	cin >> D.n;
	for (int i = 0; i < D.n; i++)
	{
		cout << " so huu ti thu " << i << " = ";
		nhap_huuti(D.a[i]);
	}
}

huuti tong_day(day_huuti D)
{
	huuti S;
	S.tu = 0;  S.mau = 1;
	for (int i = 0; i < D.n; i++)
		S = tong(S, D.a[i]);
	return S;
}

int uscln(int a, int b)
{
	if (a < 0)  a = -a;
	if (b < 0)  b = -b;
	while (a > 0 && b > 0)
		if (a > b)
			a -= b;
		else
			b -= a;
	return (a + b);
}