Chương 8. Lập trình với tập tin văn bản thô
Khái niệm tập tin văn bản thô.
Hệ thống nhập xuất tập tin văn bản thô.
Thao tác xử lý trên tập tin văn bản thô.

# Tóm Tắt Nội Dung: Characters, Strings và String Class trong C++

## 📚 Tổng quan
Tài liệu này tóm tắt nội dung từ 3 bài giảng về xử lý ký tự và chuỗi trong C++, bao gồm:
- File 1: Character Testing, C-strings và String Class cơ bản
- File 2 & 3: C++ String Class chi tiết và các hàm thành viên

---

## 📖 File 1: Chapter 10 - Characters, Strings, and the String Class

### 10.1 Character Testing
- **Thư viện cần include**: `#include <ctype.h>`
- **Các hàm kiểm tra ký tự**:
  - `isalpha()` - Kiểm tra ký tự chữ cái
  - `isdigit()` - Kiểm tra ký tự số
  - `islower()` - Kiểm tra chữ thường
  - `isupper()` - Kiểm tra chữ hoa
  - `isspace()` - Kiểm tra khoảng trắng

**Ví dụ ứng dụng**: Kiểm tra định dạng mã khách hàng (LLLNNNN - 3 chữ cái + 4 chữ số)

### 10.2 Character Case Conversion
- **Các hàm chuyển đổi**:
  - `toupper()` - Chuyển sang chữ hoa
  - `tolower()` - Chuyển sang chữ thường

### 10.3 C-strings (Chuỗi kiểu C)
- **Đặc điểm**:
  - Mảng ký tự kết thúc bằng ký tự null (`\0`)
  - Lưu trữ liên tiếp trong bộ nhớ
  - Ví dụ: `char name[80];`

### 10.4 Thư Viện Hàm cho C-strings
- **Thư viện**: `#include <string.h>`
- **Các hàm quan trọng**:
  - `strstr()` - Tìm chuỗi con
  - `strlen()` - Độ dài chuỗi
  - `strcpy()` - Copy chuỗi
  - `strcat()` - Nối chuỗi

### 10.5 Hàm Chuyển Đổi String/Numeric
- **Thư viện**: `#include <stdlib.h>`
- Chuyển đổi giữa chuỗi và số

### 10.6 Sử Dụng Pointers với C-strings
- Truyền chuỗi qua con trỏ rất hữu ích
- Chuỗi tồn tại từ địa chỉ con trỏ đến ký tự `\0`

**Ví dụ**: Hàm đếm số lần xuất hiện của ký tự
```cpp
int countChars(char *strPtr, char ch)
```

### 10.7 C++ String Class
- **Ưu điểm**: Dễ lập trình hơn C-strings
- **Cần include**:
  ```cpp
  #include <string>
  using namespace std;
  ```

**Khai báo**:
```cpp
string movieTitle;
string name("William Smith");
movieTitle = "Wheels of Fury";
```

**Đọc input**:
```cpp
cin >> name;                  // Đọc đến khoảng trắng
getline(cin, name);           // Đọc cả dòng
```

**So sánh chuỗi**: Sử dụng toán tử `<, >, <=, >=, ==, !=`

**Toán tử hỗ trợ**:
- `>>` - Trích xuất từ stream
- `<<` - Chèn vào stream
- `=` - Gán
- `+=` - Nối thêm
- `+` - Concatenation
- `[]` - Truy cập từng ký tự

---

## 📖 File 2 & 3: C++ Strings (Chi tiết)

### Tạo String Objects
```cpp
#include <string>

string s;                      // Chuỗi rỗng
string s1("Hello");            // 5 ký tự
string s2 = "Hello";           // 5 ký tự (gọi constructor ngầm)
string s3(8, 'x');             // 8 ký tự 'x'
string s4 = s3;                // Copy từ s3
string s5(s2, 3, 2);           // Substring: "lo"
```

### Input/Output
**Formatted Input (cin >>)**:
- Bỏ qua khoảng trắng
- Đọc đến khi gặp whitespace

**Unformatted Input (getline)**:
- Không bỏ qua khoảng trắng
- Đọc cả dòng đến khi gặp newline
```cpp
getline(cin, s);
```

### Truy Cập Ký Tự
```cpp
string s = "ABCDEFG";
char c = s[2];        // c = 'C'
s[4] = '*';           // s = "ABCD*FG"
```

### Các Hàm Thành Viên Quan Trọng

#### 1. Độ dài và đặc tính
```cpp
s.length()            // Độ dài chuỗi
s.size()              // Giống length()
s.capacity()          // Dung lượng có thể lưu
s.max_size()          // Kích thước tối đa
s.empty()             // Kiểm tra chuỗi rỗng
s.resize(newlength)   // Thay đổi kích thước
```

#### 2. So sánh chuỗi
```cpp
// Toán tử: ==, !=, <, >, <=, >=
if (s2 < s5) { ... }

// Hàm compare
s1.compare(s2)                          // So sánh toàn bộ
s1.compare(start, length, s2)           // So sánh một phần
s1.compare(start, length, s2, start, length)
```
**Thứ tự lexicographical**: 'A' < "Apple" < "Banana" < "Zest" < 'a' < "apricot" < "leon"

#### 3. Nối chuỗi (Concatenation)
```cpp
string s = "ABCD*FG";
string s2 = "Robot";
string s5 = "Soccer";

string s6 = s + "HIJK";        // "ABCD*FGHIJK"
s2 += s5;                      // "RobotSoccer"
s3.append("pet");              // Nối "pet"
s3.append(s1, start, N);       // Nối N ký tự từ s1
```

#### 4. Substring
```cpp
s6 = "ABCD*FGHIJK";
s4 = s6.substr(5, 3);          // "FGH" (từ index 5, lấy 3 ký tự)
```

#### 5. Erase và Replace
```cpp
s6 = "ABCD*FGHIJK";
s6.erase(4, 2);                // "ABCDGHIJK" (xóa từ index 4, 2 ký tự)
s6.replace(5, 2, "xyz");       // "ABCDGxyzJK" (thay 2 ký tự tại index 5)

// Replace nâng cao
s1.replace(begin, N, s2, index, num)
// Ví dụ:
str.replace(19, 6, str3, 7, 6);  // Thay 6 ký tự tại vị trí 19 bằng 6 ký tự từ vị trí 7 của str3
```

#### 6. Tìm kiếm (Find)
```cpp
string s7 = "Mississippi River basin";

s7.find("si")                  // Trả về 3 (index đầu tiên)
s7.find("so")                  // Trả về 23 (không tìm thấy = length)

s1.rfind(s2)                   // Tìm từ phải sang trái
s1.find_first_of("abcd")       // Tìm ký tự đầu tiên là 'a', 'b', 'c' hoặc 'd'
s1.find_last_of(s2)            // Tìm ký tự cuối cùng trong s2
s1.find_first_not_of(s2)       // Tìm ký tự đầu tiên KHÔNG có trong s2
s1.find_last_not_of(s2)        // Tìm ký tự cuối cùng KHÔNG có trong s2
```
**Lưu ý**: Nếu không tìm thấy, trả về `string::npos` (4,294,967,295)

#### 7. Insert
```cpp
s1.insert(index, s2)           // Chèn s2 trước vị trí index
s1.insert(index, s2, index2, N) // Chèn N ký tự từ s2 (bắt đầu từ index2)
```

#### 8. Swap
```cpp
s1.swap(s2);                   // Hoán đổi nội dung 2 chuỗi
```

#### 9. Range-checking với at()
```cpp
s3.at(index);                  // Truy cập có kiểm tra phạm vi
// Ném exception out_of_range nếu index không hợp lệ

try {
    char letter = s.at(50);
}
catch(exception& e) {
    cout << "out_of_range exception: " << e.what() << endl;
}
```
**So sánh**: `[]` không kiểm tra phạm vi, `at()` có kiểm tra

---

## 🔑 Điểm Chính Cần Nhớ

### C-strings vs C++ Strings

| Đặc điểm | C-strings | C++ Strings |
|----------|-----------|-------------|
| Khai báo | `char s[100];` | `string s;` |
| Kết thúc | Ký tự null `\0` | Tự động quản lý |
| Độ an toàn | Thấp (có thể overflow) | Cao (tự động mở rộng) |
| Dễ sử dụng | Phức tạp hơn | Đơn giản, trực quan |
| Thư viện | `string.h` | `<string>` |
| So sánh | `strcmp()` | Toán tử `==, <, >` |
| Nối chuỗi | `strcat()` | Toán tử `+, +=` |

### Khi nào dùng gì?
- **C-strings**: Code legacy, tương thích C, tối ưu hiệu năng
- **C++ Strings**: Mặc định cho code mới, an toàn hơn, dễ bảo trì

### Lưu ý quan trọng
1. **Header files**: `<string>` cho C++ string, `string.h` cho C-string
2. **namespace**: Cần `using namespace std;` cho C++ string
3. **Indexing**: Bắt đầu từ 0, kết thúc tại `length-1`
4. **find() failure**: Trả về `string::npos` hoặc độ dài chuỗi
5. **Range-checking**: Dùng `at()` thay vì `[]` nếu cần kiểm tra phạm vi

---

## 💡 Ví Dụ Tổng Hợp

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Tạo và khởi tạo
    string s1 = "Hello";
    string s2 = "World";
    
    // Nối chuỗi
    string s3 = s1 + " " + s2;  // "Hello World"
    
    // Truy cập và thay đổi
    s3[0] = 'h';  // "hello World"
    
    // Tìm kiếm
    int pos = s3.find("World");  // pos = 6
    
    // Substring
    string sub = s3.substr(6, 5);  // "World"
    
    // Thay thế
    s3.replace(6, 5, "C++");  // "hello C++"
    
    // So sánh
    if (s1 < s2) {
        cout << s1 << " comes before " << s2 << endl;
    }
    
    // Độ dài
    cout << "Length: " << s3.length() << endl;
    
    return 0;
}
```

---

## 📌 Tham Khảo Nhanh

### Các hàm hay dùng nhất:
1. `length()` / `size()` - Độ dài
2. `substr(pos, len)` - Lấy chuỗi con
3. `find(str)` - Tìm kiếm
4. `replace(pos, len, str)` - Thay thế
5. `erase(pos, len)` - Xóa
6. `insert(pos, str)` - Chèn
7. `compare(str)` - So sánh
8. `append(str)` / `+=` - Nối thêm

### Toán tử thường dùng:
- `+` - Nối chuỗi
- `+=` - Nối thêm
- `==, !=, <, >, <=, >=` - So sánh
- `[]` - Truy cập ký tự
- `<<, >>` - Input/Output

---

**Ghi chú**: Tài liệu này được tóm tắt từ 3 file PowerPoint về xử lý chuỗi trong C++.