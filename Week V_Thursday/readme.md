# Kiến thức Lập trình C/C++ - Hàm và Thuật toán

## 1. Khái niệm hàm (Function)

Hàm là một khối mã thực hiện một nhiệm vụ cụ thể, có thể được gọi nhiều lần trong chương trình.

**Tại sao dùng hàm?**

- Tái sử dụng code, tránh lặp lại
- Chia chương trình thành các phần nhỏ, dễ quản lý
- Dễ debug và bảo trì

---

## 2. Khai báo và định nghĩa hàm
```c
kiểu_trả_về tên_hàm(danh_sách_tham_số);

kiểu_trả_về tên_hàm(danh_sách_tham_số) {
    return giá_trị;
}
```

**Ví dụ:**
```c
int tinhTong(int a, int b);

int tinhTong(int a, int b) {
    return a + b;
}
```

---

## 3. Gọi hàm và truyền giá trị (Pass by Value)

Khi truyền giá trị, hàm nhận **bản sao** của biến. Thay đổi trong hàm **không ảnh hưởng** biến gốc.
```c
void tang(int x) {
    x = x + 1;
}

int main() {
    int a = 5;
    tang(a);
    printf("%d", a);
}
```

---

## 4. Truyền tham chiếu (Pass by Reference)

Dùng **con trỏ** (C) hoặc **tham chiếu &** (C++) để thay đổi biến gốc.

### Cách 1 - Dùng con trỏ (C/C++)
```c
void tang(int *x) {
    *x = *x + 1;
}

int main() {
    int a = 5;
    tang(&a);
    printf("%d", a);
}
```

### Cách 2 - Dùng tham chiếu (C++ only)
```cpp
void tang(int &x) {
    x = x + 1;
}

int main() {
    int a = 5;
    tang(a);
    cout << a;
}
```

---

## 5. Hàm đệ quy (Recursion)

Hàm **gọi chính nó** để giải quyết bài toán.

### Cấu trúc
```c
kiểu tên_hàm(tham_số) {
    if (điều_kiện_dừng) {
        return giá_trị_cơ_sở;
    }
    return ... tên_hàm(tham_số_nhỏ_hơn) ...;
}
```

### Ví dụ - Tính giai thừa
```c
int giaiThua(int n) {
    if (n <= 1) return 1;
    return n * giaiThua(n - 1);
}
```

### Ví dụ - Fibonacci
```c
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
```

---

## 6. Khái niệm thuật toán

Thuật toán là **dãy các bước hữu hạn, rõ ràng** để giải quyết một bài toán.

### Đặc trưng của thuật toán

| Đặc trưng | Mô tả |
|-----------|-------|
| **Input** | Dữ liệu đầu vào |
| **Output** | Kết quả đầu ra |
| **Tính xác định** | Mỗi bước rõ ràng, không mơ hồ |
| **Tính hữu hạn** | Phải dừng sau số bước hữu hạn |
| **Tính hiệu quả** | Các bước đủ đơn giản để thực hiện |

---

## 7. Cách biểu diễn thuật toán

| Cách biểu diễn | Mô tả |
|----------------|-------|
| **Ngôn ngữ tự nhiên** | Mô tả bằng lời |
| **Lưu đồ (Flowchart)** | Dùng hình vẽ, sơ đồ |
| **Mã giả (Pseudocode)** | Gần giống code nhưng không theo cú pháp cụ thể |
| **Code thực** | Viết bằng ngôn ngữ lập trình |

---

## 8. Độ phức tạp thuật toán (Big-O)

Đánh giá **thời gian/bộ nhớ** thuật toán cần khi dữ liệu tăng.

### Bảng độ phức tạp phổ biến

| Ký hiệu | Tên gọi | Ví dụ |
|---------|---------|-------|
| `O(1)` | Hằng số | Truy cập mảng theo chỉ số |
| `O(log n)` | Logarit | Tìm kiếm nhị phân |
| `O(n)` | Tuyến tính | Duyệt mảng 1 lần |
| `O(n log n)` | Log tuyến tính | Quick sort, Merge sort |
| `O(n²)` | Bình phương | Bubble sort, 2 vòng lặp lồng nhau |
| `O(2ⁿ)` | Mũ | Fibonacci đệ quy không tối ưu |

### Ví dụ minh họa
```c
for (int i = 0; i < n; i++) {
}

for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
    }
}
```

---

> **Ghi chú:** Tài liệu này tổng hợp kiến thức về hàm và thuật toán trong C/C++.