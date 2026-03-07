# CHƯƠNG 6 – MẢNG
## Bài 9: Tìm hiểu về mảng – Mảng 1 chiều

---

## buổi học

- Hiểu được khái niệm cơ bản mảng, mảng một chiều và cách tổ chức lưu trữ các phần tử trong mảng.
- Giải thích và sử dụng được một số thao tác cơ bản trên mảng một chiều.
- Viết chương trình sử dụng mảng một chiều.

---

## Nội dung chính

### 1. Giới thiệu về mảng

**Vấn đề đặt ra:**

- Cần lưu trữ 3 số nguyên → khai báo 3 biến `int a1, a2, a3;`
- Cần lưu trữ 100 số nguyên → khai báo 100 biến? Rất bất tiện!
- Người dùng muốn nhập `n` số nguyên → không thực hiện được với biến thường!

**Giải pháp:** Sử dụng **mảng** – kiểu dữ liệu cho phép lưu trữ một dãy các giá trị cùng kiểu và dễ dàng truy xuất.

**Đặc điểm của mảng trong C/C++:**

- Là tập hợp các dữ liệu **cùng kiểu** với **độ dài cố định**.
- Thay vì khai báo `so0, so1, ..., so99`, ta khai báo `so[0], so[1], ..., so[99]`.
- Mỗi phần tử được truy cập qua **chỉ số**.

---

### 2. Khái niệm mảng

- Là kiểu dữ liệu có cấu trúc do người lập trình định nghĩa.
- Biểu diễn một **dãy các biến có cùng kiểu** (số nguyên, ký tự, ...).
- **Kích thước cố định**, xác định ngay khi khai báo.
- Ngôn ngữ C luôn chỉ định một **khối nhớ liên tục** cho biến kiểu mảng.

**Phân loại:**

| Loại | Mô tả |
|------|--------|
| **Mảng 1 chiều** | Dãy các phần tử cùng kiểu (int, float, char...) |
| **Mảng 2 chiều (Ma trận)** | Gồm các phần tử trên dòng và cột |

---

### 3. Các yếu tố xác định mảng

Mỗi mảng cần xác định 4 yếu tố:

| Yếu tố | Ví dụ 1 | Ví dụ 2 |
|---------|---------|---------|
| **Tên mảng** | `MangSoNguyen` | `MangKyTu` |
| **Kiểu mảng** | `int` | `char` |
| **Số chiều** | 2 chiều | 1 chiều |
| **Kích thước** | 2 cột × 3 dòng | 4 phần tử |

---

### 4. Mảng 1 chiều

#### 4.1. Khai báo mảng 1 chiều

**Cú pháp:**

```c
<Kiểu dữ liệu> <Tên biến mảng>[<Số phần tử mảng>];
```

**Ví dụ:**

```c
int Mang1Chieu[30];   // Mảng 30 số nguyên
char A[10];            // Mảng 10 ký tự
```

**Lưu ý quan trọng:**

- Phải xác định cụ thể số phần tử ngay lúc khai báo.
- **Không được** dùng biến hoặc hằng thường: `int n1 = 10; int a[n1];` → **SAI**
- **Nên dùng** `#define` để định nghĩa:

```c
#define n1 10
#define n2 20
int a[n1];         // tương đương int a[10];
int b[n1][n2];     // tương đương int b[10][20];
```

#### Khởi tạo mảng 1 chiều

```c
int A[4] = {29, 137, 50, 4};   // Khởi tạo tất cả phần tử
int B[4] = {91, 106};           // Khởi tạo một số phần tử đầu (còn lại = 0)
int a[4] = {0};                 // Tất cả bằng 0
int a[] = {22, 16, 56, 19};    // Tự động xác định kích thước (4 phần tử)
```

#### 4.2. Chỉ số mảng và truy xuất phần tử

- Chỉ số mảng phải là kiểu **đơn giản, rời rạc** (số nguyên, ký tự).
- Chỉ số mặc định bắt đầu từ **0**.
- Với `int A[5]`: chỉ số hợp lệ là `0, 1, 2, 3, 4`.

```c
// Truy xuất hợp lệ
A[0], A[1], A[2], A[3]

// Truy xuất KHÔNG hợp lệ
A[-1], A[4], A[5]
```

#### 4.3. Lấy địa chỉ phần tử mảng

```c
&<Tên biến>[<chỉ số>];
// Ví dụ:
scanf("%d", &A[0]);
```

> **Lưu ý:** Tên mảng chứa địa chỉ phần tử đầu tiên của mảng.

#### 4.4. Truyền mảng cho hàm

```c
void SapXep(int A[100], int n);   // Khai báo đầy đủ
void NhapMang(int A[], int n);     // Bỏ số lượng phần tử
void NhapMang(int *A, int n);      // Dùng con trỏ
```

**Đặc điểm:** Tham số mảng truyền cho hàm chính là **địa chỉ phần tử đầu tiên** → mảng có thể bị **thay đổi nội dung** sau khi thực hiện hàm.

**Ví dụ chương trình:**

```c
#include <stdio.h>
#include <conio.h>

void nhap(int A[], int &N);
void xuat(int A[], int N);
void SapXep(int A[], int N);

void main() {
    int a[100], n;
    nhap(a, n);
    xuat(a, n);
}
```

---

### 5. Các tác vụ trên mảng 1 chiều

#### 5.1. Nhập mảng

```c
void nhapmang(int A[], int N) {
    for (int i = 0; i < N; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &A[i]);
    }
}
```

#### 5.2. Xuất mảng

```c
void xuatmang(int A[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%4d", A[i]);
    }
}
```

#### 5.3. Tìm kiếm phần tử trong mảng

**Tìm vị trí phần tử x:**

```c
int TimKiem(int a[], int n, int x) {
    for (int vt = 0; vt < n; vt++)
        if (a[vt] == x)
            return vt;
    return -1;
}
```

**Tìm giá trị lớn nhất** (kỹ thuật lính canh):

```c
int Max(int a[], int n) {
    int Max = a[0];
    for (int i = 0; i < n; i++)
        if (Max < a[i])
            Max = a[i];
    return Max;
}
```

#### 5.4. Kiểm tra tính chất của mảng

**Ví dụ:** Kiểm tra mảng có toàn số nguyên tố không?

**Hàm kiểm tra số nguyên tố** (kỹ thuật cờ hiệu):

```c
int LaSNT(int n) {
    int i, flag = 0;
    for (i = 2; i < n; i++)
        if (n % i == 0)
            flag = 1;
    if (flag == 0)
        return 1;   // Là SNT
    return 0;        // Không phải SNT
}
```

**3 ý tưởng kiểm tra:**

- **YT1:** Đếm số lượng SNT. Nếu bằng `n` → mảng toàn SNT.
- **YT2:** Đếm số không phải SNT. Nếu bằng `0` → mảng toàn SNT.
- **YT3:** Tìm phần tử không phải SNT. Nếu có → mảng không toàn SNT.

#### 5.5. Đếm số lượng phần tử chẵn

```c
int DemChan(int A[], int N) {
    int DC = 0;
    for (int i = 0; i < N; i++)
        if (A[i] % 2 == 0)
            DC++;
    return DC;
}
```

#### 5.6. Tính tổng các phần tử chẵn

```c
int TongChan(int A[], int N) {
    int TC = 0;
    for (int i = 0; i < N; i++)
        if (A[i] % 2 == 0)
            TC = TC + A[i];
    return TC;
}
```

#### 5.7 – 5.10 (Các tác vụ nâng cao)

- **5.7.** Tách mảng / Gộp mảng
- **5.8.** Tìm giá trị nhỏ nhất / lớn nhất
- **5.9.** Sắp xếp mảng tăng dần / giảm dần
- **5.10.** Thêm / Xóa / Sửa phần tử trong mảng

---

## Bài tập

1. Viết chương trình nhập vào một dãy tăng dần (không cần sắp xếp). Nếu nhập sai thì nhập lại. Xuất các số nguyên tố có trong mảng.
2. Kiểm tra mảng có **đối xứng** hay không.
3. Liệt kê các giá trị xuất hiện trong mảng **đúng 1 lần**.
4. Tìm vị trí của phần tử có giá trị **âm lớn nhất** trong mảng số nguyên.
5. Viết hàm xóa phần tử có chỉ số `k` trong mảng `a` có `n` phần tử. Nếu `k < 0` hoặc `k >= n` thì không xóa (trả về `0`), ngược lại xóa và trả về `1`.

---

## Các kỹ thuật quan trọng trong bài

| Kỹ thuật | Mô tả | Ví dụ áp dụng |
|----------|--------|---------------|
| **Kỹ thuật lính canh** | Gán giá trị ban đầu rồi duyệt so sánh cập nhật | Tìm Max/Min |
| **Kỹ thuật cờ hiệu** | Dùng biến flag để đánh dấu trạng thái | Kiểm tra SNT |
| **Kỹ thuật đếm** | Dùng biến đếm tăng khi thỏa điều kiện | Đếm phần tử chẵn |
| **Kỹ thuật tính tổng** | Cộng dồn giá trị thỏa điều kiện | Tổng phần tử chẵn |