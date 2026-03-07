#include <stdio.h>
#include <math.h>

#define MAX 100

// hàm
void nhapMang(int a[], int &n) {
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%4d", a[i]);
    printf("\n");
}

int laSNT(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= (int)sqrt((double)n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
// BÀI 1: Nhập dãy tăng dần, xuất các số nguyên tố

void bai1() {
    printf("\n===== BAI 1: Nhap day tang dan, xuat SNT =====\n");
    int a[MAX], n;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    printf("a[0] = ");
    scanf("%d", &a[0]);

    for (int i = 1; i < n; i++) {
        do {
            printf("a[%d] = ", i);
            scanf("%d", &a[i]);
            if (a[i] <= a[i - 1])
                printf("  >> Sai! Phai nhap gia tri > %d. Nhap lai.\n", a[i - 1]);
        } while (a[i] <= a[i - 1]);
    }

    printf("Mang da nhap: ");
    xuatMang(a, n);

    printf("Cac so nguyen to trong mang: ");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (laSNT(a[i])) {
            printf("%4d", a[i]);
            found = 1;
        }
    }
    if (!found) printf("Khong co");
    printf("\n");
}

// BÀI 2: Kiểm tra mảng đối xứng
void bai2() {
    printf("\n===== BAI 2: Kiem tra mang doi xung =====\n");
    int a[MAX], n;
    nhapMang(a, n);

    printf("Mang: ");
    xuatMang(a, n);

    int doiXung = 1;
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            doiXung = 0;
            break;
        }
    }

    if (doiXung)
        printf("=> Mang DOI XUNG.\n");
    else
        printf("=> Mang KHONG doi xung.\n");
}

// BÀI 3: Liệt kê giá trị xuất hiện đúng 1 lần
void bai3() {
    printf("\n===== BAI 3: Liet ke gia tri xuat hien dung 1 lan =====\n");
    int a[MAX], n;
    nhapMang(a, n);

    printf("Mang: ");
    xuatMang(a, n);

    printf("Cac gia tri xuat hien dung 1 lan: ");
    int found = 0;
    for (int i = 0; i < n; i++) {
        int dem = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i])
                dem++;
        }
        if (dem == 1) {
            printf("%4d", a[i]);
            found = 1;
        }
    }
    if (!found) printf("Khong co");
    printf("\n");
}

// BÀI 4: Tìm vị trí phần tử âm lớn nhất
void bai4() {
    printf("\n===== BAI 4: Tim vi tri phan tu am lon nhat =====\n");
    int a[MAX], n;
    nhapMang(a, n);

    printf("Mang: ");
    xuatMang(a, n);

    int viTri = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            if (viTri == -1 || a[i] > a[viTri])
                viTri = i;
        }
    }

    if (viTri == -1)
        printf("=> Khong co phan tu am trong mang.\n");
    else
        printf("=> Phan tu am lon nhat: a[%d] = %d\n", viTri, a[viTri]);
}

// BÀI 5: Xóa phần tử tại chỉ số k
int xoaPhanTu(int a[], int &n, int k) {
    if (k < 0 || k >= n)
        return 0;

    for (int i = k; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;
    return 1;
}

void bai5() {
    printf("\n===== BAI 5: Xoa phan tu tai chi so k =====\n");
    int a[MAX], n, k;
    nhapMang(a, n);

    printf("Mang truoc khi xoa: ");
    xuatMang(a, n);

    printf("Nhap chi so k can xoa: ");
    scanf("%d", &k);

    int ketQua = xoaPhanTu(a, n, k);

    if (ketQua == 1) {
        printf("=> Xoa thanh cong! Mang sau khi xoa: ");
        xuatMang(a, n);
    } else {
        printf("=> Khong xoa duoc (k = %d khong hop le).\n", k);
    }
}

// Main
int main() {
    int chon;
    do {
        printf("\n========== MENU BAI TAP MANG 1 CHIEU ==========\n");
        printf("1. Nhap day tang dan, xuat so nguyen to\n");
        printf("2. Kiem tra mang doi xung\n");
        printf("3. Liet ke gia tri xuat hien dung 1 lan\n");
        printf("4. Tim vi tri phan tu am lon nhat\n");
        printf("5. Xoa phan tu tai chi so k\n");
        printf("0. Thoat\n");
        printf("Chon bai: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1: bai1(); break;
            case 2: bai2(); break;
            case 3: bai3(); break;
            case 4: bai4(); break;
            case 5: bai5(); break;
            case 0: printf("Tam biet!\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (chon != 0);

    return 0;
}