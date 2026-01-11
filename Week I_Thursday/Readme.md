# Chương 1-2: GIỚI THIỆU TỔNG QUAN VỀ LẬP TRÌNH VÀ LẬP TRÌNH C++ VỚI CÁC KIỂU DỮ LIỆU CƠ SỞ

## Mục lục
1. [Khái niệm về Máy tính và Lập trình](#1-khái-niệm-về-máy-tính-và-lập-trình)
2. [Giới thiệu về Ngôn ngữ Lập trình](#2-giới-thiệu-về-ngôn-ngữ-lập-trình)
3. [Ngôn ngữ Lập trình C++](#3-ngôn-ngữ-lập-trình-c)
4. [Cấu trúc Chương trình C++](#4-cấu-trúc-chương-trình-c)

---

## 1. Khái niệm về Máy tính và Lập trình

### a. Máy tính là gì?

Máy tính là **thiết bị điện tử lập trình được** có khả năng:
- Nhận dữ liệu đầu vào (Input)
- Xử lý thông tin theo chương trình
- Tạo ra kết quả đầu ra (Output)
- Lưu trữ dữ liệu lâu dài
- Thực hiện đa dạng nhiệm vụ: tính toán, soạn thảo, giải trí, truy cập internet...

**Thành phần chính:**
- **Phần cứng (Hardware):** CPU, RAM, ổ cứng, bo mạch chủ...
- **Phần mềm (Software):** Hệ điều hành, ứng dụng, trình điều khiển...

Máy tính đã trở thành công cụ thiết yếu trong mọi lĩnh vực của cuộc sống hiện đại.

---

### b. Cấu trúc tổng quan của Máy tính

#### Kiến trúc Von Neumann
Máy tính hoạt động theo mô hình **Von Neumann** với 3 khối chính kết nối qua hệ thống Bus:

```
┌─────────────────────────────────────────────────┐
│                     CPU                         │
│  ┌──────────────┐  ┌──────────────┐            │
│  │ Khối điều    │  │ Khối tính    │            │
│  │ khiển (CU)   │  │ toán (ALU)   │            │
│  └──────────────┘  └──────────────┘            │
│         │  Thanh ghi (Registers)  │            │
└─────────┼─────────────────────────┼────────────┘
          │         BUS SYSTEM      │
          ├─────────────────────────┤
┌─────────▼─────────────────────────▼────────────┐
│              BỘ NHỚ (Memory)                   │
│  • RAM (bộ nhớ truy cập ngẫu nhiên)            │
│  • ROM (bộ nhớ chỉ đọc)                        │
│  • HDD/SSD (bộ nhớ ngoài)                      │
└────────────────────────────────────────────────┘
          │                         │
┌─────────▼─────────┐     ┌─────────▼─────────┐
│  THIẾT BỊ NHẬP    │     │  THIẾT BỊ XUẤT    │
│  • Bàn phím       │     │  • Màn hình       │
│  • Chuột          │     │  • Máy in         │
│  • Microphone     │     │  • Loa            │
└───────────────────┘     └───────────────────┘
```

#### CPU (Central Processing Unit)
"Bộ não" của máy tính, gồm:
- **Khối điều khiển (CU):** Điều phối hoạt động của các thành phần
- **Khối tính toán (ALU):** Thực hiện các phép toán số học và logic
- **Thanh ghi (Registers):** Lưu trữ tạm thời dữ liệu đang xử lý

#### Bộ nhớ
- **Bộ nhớ trong:** Tốc độ cao, dung lượng nhỏ (RAM, ROM, Cache)
- **Bộ nhớ ngoài:** Tốc độ chậm hơn, dung lượng lớn (HDD, SSD, USB)

#### Hệ thống Bus
Đường truyền tín hiệu kết nối các thành phần:
- **Bus dữ liệu:** Truyền dữ liệu giữa các thành phần
- **Bus địa chỉ:** Xác định vị trí bộ nhớ cần truy cập
- **Bus điều khiển:** Truyền tín hiệu điều khiển

#### Thiết bị ngoại vi
- **Thiết bị nhập:** Bàn phím, chuột, máy quét, webcam...
- **Thiết bị xuất:** Màn hình, máy in, loa, tai nghe...
- **Thiết bị nhập/xuất:** Màn hình cảm ứng, ổ cứng di động...

---

### c. Phần mềm máy tính

```
┌─────────────────────────────────────────────────┐
│           PHẦN MỀM MÁY TÍNH                     │
└─────────────────────────────────────────────────┘
                      │
        ┌─────────────┴─────────────┐
        │                           │
┌───────▼────────┐         ┌────────▼────────┐
│  PHẦN MỀM HỆ  │         │  PHẦN MỀM ỨNG   │
│    THỐNG       │         │      DỤNG       │
├────────────────┤         ├─────────────────┤
│ • Windows      │         │ • MS Office     │
│ • Linux        │         │ • Photoshop     │
│ • macOS        │         │ • Chrome        │
│ • Android      │         │ • Game          │
│ • iOS          │         │ • App mobile    │
└────────────────┘         └─────────────────┘
        │                           │
        └─────────────┬─────────────┘
                      │
              ┌───────▼────────┐
              │  PHẦN MỀM TIỆN │
              │      ÍCH        │
              ├────────────────┤
              │ • Trình điều   │
              │   khiển        │
              │ • Antivirus    │
              │ • Trình biên   │
              │   dịch         │
              └────────────────┘
```

**Phân loại phần mềm:**

1. **Phần mềm hệ thống (System Software)**
   - Quản lý và điều khiển hoạt động của máy tính
   - Ví dụ: Windows, Linux, macOS, Android, iOS

2. **Phần mềm ứng dụng (Application Software)**
   - Phục vụ nhu cầu cụ thể của người dùng
   - Ví dụ: MS Office, Photoshop, Chrome, Game, App mobile

3. **Phần mềm tiện ích (Utility Software)**
   - Hỗ trợ bảo trì và tối ưu hóa hệ thống
   - Ví dụ: Trình điều khiển, Antivirus, Trình biên dịch

---

### d. Tại sao Máy tính có thể xử lý nhiều lĩnh vực khác nhau?

Máy tính có khả năng xử lý đa dạng lĩnh vực nhờ các yếu tố sau:

#### 1. Tính lập trình được (Programmability)
- Máy tính không được thiết kế cứng cho một nhiệm vụ cụ thể
- Có thể thay đổi hành vi bằng cách thay đổi chương trình
- Cùng một phần cứng có thể chạy vô số phần mềm khác nhau

#### 2. Khả năng xử lý thông tin số hóa
- Mọi dữ liệu (văn bản, hình ảnh, âm thanh, video) đều được chuyển thành dạng số nhị phân (0 và 1)
- CPU chỉ cần biết xử lý các con số này theo các quy tắc logic
- Nguyên lý "mọi thứ đều là số" cho phép biểu diễn và xử lý mọi loại thông tin

#### 3. Tốc độ xử lý cực nhanh
- Thực hiện hàng tỷ phép tính mỗi giây (GHz)
- Có thể xử lý song song nhiều tác vụ cùng lúc
- Tốc độ cao cho phép giải quyết các bài toán phức tạp trong thời gian ngắn

#### 4. Tính linh hoạt của phần mềm
- Phần mềm có thể được viết để giải quyết bất kỳ vấn đề nào có thể mô tả bằng thuật toán
- Từ tính toán khoa học, thiết kế đồ họa, đến chơi game hay điều khiển robot
- Không giới hạn về lĩnh vực ứng dụng

#### 5. Khả năng mở rộng và tích hợp
- Kết nối được với nhiều thiết bị ngoại vi khác nhau
- Tích hợp nhiều công nghệ: mạng, đồ họa, âm thanh, video...
- Có thể nâng cấp phần cứng và cập nhật phần mềm

#### 6. Khả năng lưu trữ và truy xuất thông tin
- Lưu trữ lượng lớn dữ liệu và truy xuất nhanh chóng
- Cho phép học từ dữ liệu (Machine Learning, AI)

**Ví dụ minh họa:** Cùng một chiếc máy tính, bạn có thể:
- Buổi sáng: Làm bảng tính Excel cho công việc
- Buổi trưa: Chỉnh sửa ảnh trong Photoshop
- Buổi chiều: Lập trình viết game
- Buổi tối: Xem phim và chơi game

**So sánh:** Khác với các thiết bị chuyên dụng (máy tính tiền, máy photocopy), máy tính có thể thực hiện tất cả các chức năng này và hơn thế nữa chỉ bằng cách cài đặt phần mềm phù hợp.

---

## 2. Giới thiệu về Ngôn ngữ Lập trình

### Ngôn ngữ lập trình là gì?

**Ngôn ngữ lập trình** là hệ thống ký hiệu được thiết kế để giao tiếp với máy tính, cho phép lập trình viên viết các chương trình (tập hợp các lệnh) để máy tính thực hiện các tác vụ cụ thể.

**Tại sao cần ngôn ngữ lập trình?**
- Máy tính chỉ hiểu mã nhị phân (0 và 1) - rất khó cho con người
- Ngôn ngữ lập trình là cầu nối giữa tư duy con người và ngôn ngữ máy
- Cho phép biểu đạt logic và thuật toán một cách rõ ràng, dễ hiểu

### Phân loại Ngôn ngữ lập trình

#### 1. Theo mức độ trừu tượng:

**a. Ngôn ngữ bậc thấp (Low-level Language)**
- Gần với ngôn ngữ máy, khó đọc đối với con người
- Kiểm soát trực tiếp phần cứng
- Hiệu suất cao nhưng khó viết và bảo trì
- Ví dụ: Assembly, Machine Code

```assembly
; Ví dụ Assembly: Cộng hai số
MOV AX, 5      ; Gán giá trị 5 vào thanh ghi AX
ADD AX, 3      ; Cộng 3 vào AX
```

**b. Ngôn ngữ bậc trung (Middle-level Language)**
- Kết hợp ưu điểm của cả hai loại
- Vừa kiểm soát được phần cứng, vừa dễ đọc hơn
- Ví dụ: C, C++

```cpp
// Ví dụ C++: Cộng hai số
int sum = 5 + 3;
```

**c. Ngôn ngữ bậc cao (High-level Language)**
- Gần với ngôn ngữ tự nhiên của con người
- Dễ học, dễ viết, dễ bảo trì
- Trừu tượng hóa các chi tiết phần cứng
- Ví dụ: Python, Java, JavaScript, C#

```python
# Ví dụ Python: Cộng hai số
sum = 5 + 3
```

#### 2. Theo phương pháp dịch:

**a. Ngôn ngữ biên dịch (Compiled Language)**
- Code nguồn được dịch toàn bộ thành mã máy trước khi chạy
- Quy trình: Code → Compiler → File thực thi → Chạy
- Ví dụ: C, C++, Go, Rust
- Ưu điểm: Chạy nhanh, phát hiện lỗi sớm
- Nhược điểm: Phải biên dịch lại khi sửa code

**b. Ngôn ngữ thông dịch (Interpreted Language)**
- Code được dịch và chạy từng dòng một
- Quy trình: Code → Interpreter → Chạy trực tiếp
- Ví dụ: Python, JavaScript, PHP, Ruby
- Ưu điểm: Linh hoạt, dễ debug
- Nhược điểm: Chạy chậm hơn ngôn ngữ biên dịch

#### 3. Theo paradigm (mô hình lập trình):

- **Lập trình thủ tục (Procedural):** C, Pascal
- **Lập trình hướng đối tượng (OOP):** Java, C++, Python
- **Lập trình hàm (Functional):** Haskell, Lisp
- **Lập trình logic (Logic):** Prolog

### Quy ước khi viết chương trình

#### Quy tắc đặt tên (Naming Convention)

**Quy tắc bắt buộc:**
- Tên biến, hàm phải **bắt đầu bằng chữ cái** (a-z, A-Z) hoặc dấu gạch dưới `_`
- Chỉ chứa chữ cái, số (0-9) và dấu gạch dưới `_`
- **Phân biệt hoa thường:** `sum` ≠ `Sum` ≠ `SUM`
- Không trùng với từ khóa của ngôn ngữ (`int`, `if`, `while`, `for`...)
- Không chứa khoảng trắng

**Ví dụ:**
```cpp
// Đúng
int studentAge;
int student_age;
int _count;
int sum2;

// Sai
int 2sum;          // Bắt đầu bằng số
int student-age;   // Chứa dấu gạch ngang
int for;           // Trùng từ khóa
int student age;   // Chứa khoảng trắng
```

#### Quy ước đặt tên phổ biến

| Loại | Quy ước | Ví dụ | Giải thích |
|------|---------|-------|------------|
| Biến | camelCase | `studentName`, `totalScore` | Chữ cái đầu viết thường, các từ tiếp theo viết hoa chữ cái đầu |
| Hằng số | UPPER_CASE | `MAX_SIZE`, `PI`, `TAX_RATE` | Tất cả chữ in hoa, phân cách bằng `_` |
| Hàm | camelCase | `calculateSum()`, `printResult()` | Giống như biến |
| Class | PascalCase | `Student`, `BankAccount` | Mỗi từ viết hoa chữ cái đầu |

#### Thói quen lập trình tốt

**1. Viết comment (chú thích)**
```cpp
// Comment một dòng: Giải thích đoạn code ngắn

/* 
   Comment nhiều dòng:
   Giải thích logic phức tạp
   hoặc mô tả hàm
*/

// Tính tổng hai số
int sum = a + b;
```

**2. Thụt đầu dòng (Indentation)**
```cpp
// Đúng - Dễ đọc
if (x > 0) {
    cout << "Positive";
    if (x > 10) {
        cout << "Greater than 10";
    }
}

// Sai - Khó đọc
if (x > 0) {
cout << "Positive";
if (x > 10) {
cout << "Greater than 10";
}
}
```

**3. Đặt tên có ý nghĩa**
```cpp
// Đúng - Tên rõ ràng
int studentAge = 20;
double averageScore = 8.5;

// Sai - Tên không rõ ràng
int x = 20;
double a = 8.5;
```

**4. Chia nhỏ chương trình**
```cpp
// Chia thành các hàm nhỏ, mỗi hàm làm một việc
int calculateSum(int a, int b) {
    return a + b;
}

void printResult(int result) {
    cout << "Result: " << result << endl;
}

int main() {
    int result = calculateSum(5, 3);
    printResult(result);
    return 0;
}
```

**5. Sử dụng khoảng trắng hợp lý**
```cpp
// Đúng - Dễ đọc
int sum = a + b;
if (x > 0) {
    // code
}

// Sai - Khó đọc
int sum=a+b;
if(x>0){
    // code
}
```

---

## 3. Ngôn ngữ Lập trình C++

### Giới thiệu về C++

**C++** là ngôn ngữ lập trình bậc trung, được phát triển bởi **Bjarne Stroustrup** vào năm **1979** tại Bell Labs, là phiên bản mở rộng của ngôn ngữ C.

**Tên gọi:** "C++" có nghĩa là "C cộng thêm" (toán tử ++ trong C là tăng thêm 1), thể hiện C++ là phiên bản nâng cấp của C.

**Đặc điểm nổi bật:**

1. **Hiệu suất cao**
   - Tốc độ xử lý nhanh gần như ngôn ngữ máy
   - Kiểm soát được bộ nhớ và phần cứng
   - Phù hợp cho ứng dụng yêu cầu hiệu năng cao

2. **Hỗ trợ lập trình hướng đối tượng (OOP)**
   - Class và Object
   - Kế thừa (Inheritance)
   - Đa hình (Polymorphism)
   - Đóng gói (Encapsulation)

3. **Đa năng**
   - Lập trình hệ thống
   - Phát triển game
   - Ứng dụng desktop
   - Embedded systems
   - Artificial Intelligence

4. **Thư viện phong phú**
   - STL (Standard Template Library)
   - Boost Libraries
   - Qt Framework

5. **Khả năng tương thích**
   - Code C có thể chạy trong C++
   - Cross-platform (Windows, Linux, macOS)

**Ứng dụng thực tế:**
- **Game Engines:** Unreal Engine, Unity, CryEngine
- **Hệ điều hành:** Windows, Linux, macOS
- **Trình duyệt web:** Google Chrome, Mozilla Firefox
- **Phần mềm đồ họa:** Adobe Photoshop, Illustrator
- **Cơ sở dữ liệu:** MySQL, MongoDB
- **Phần mềm văn phòng:** Microsoft Office
- **AI/Machine Learning:** TensorFlow (backend)

### Lịch sử phát triển C++

| Năm | Phiên bản | Đặc điểm chính |
|-----|-----------|----------------|
| 1979 | C with Classes | Phiên bản đầu tiên |
| 1983 | C++ | Đổi tên chính thức |
| 1998 | C++98 | Chuẩn hóa đầu tiên |
| 2011 | C++11 | Thay đổi lớn: auto, lambda, smart pointers |
| 2014 | C++14 | Cải tiến C++11 |
| 2017 | C++17 | Structured binding, if constexpr |
| 2020 | C++20 | Concepts, Ranges, Coroutines |
| 2023 | C++23 | Phiên bản mới nhất |

### Cài đặt môi trường lập trình C++

#### Compiler phổ biến:

**Windows:**
- MinGW (Minimalist GNU for Windows)
- Visual Studio Compiler (MSVC)
- Clang

**Linux:**
- GCC (GNU Compiler Collection) - Thường có sẵn
- Clang

**macOS:**
- Clang (mặc định)
- GCC (cài qua Homebrew)

#### IDE (Integrated Development Environment) đề xuất:

**Miễn phí:**
- **Visual Studio Code** - Nhẹ, đa nền tảng, nhiều extension
- **Code::Blocks** - Đơn giản, dễ sử dụng cho người mới
- **Dev-C++** - Nhẹ, phổ biến ở Việt Nam
- **Visual Studio Community** - Mạnh mẽ, đầy đủ tính năng

**Trả phí:**
- **CLion** (JetBrains) - Chuyên nghiệp, nhiều tính năng
- **Visual Studio Professional/Enterprise**

#### Hướng dẫn cài đặt nhanh

**Trên Windows (dùng MinGW):**
1. Tải MinGW từ https://mingw-w64.org/
2. Cài đặt và thêm vào PATH
3. Kiểm tra: Mở CMD, gõ `g++ --version`

**Trên Linux (Ubuntu/Debian):**
```bash
sudo apt update
sudo apt install build-essential
g++ --version
```

**Trên macOS:**
```bash
xcode-select --install
g++ --version
```

---

## 4. Cấu trúc Chương trình C++

### Chương trình C++ đơn giản đầu tiên

```cpp
// File: hello.cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

### Phân tích từng thành phần

```cpp
#include <iostream>     // (1) Khai báo thư viện
using namespace std;    // (2) Sử dụng namespace std

int main() {            // (3) Hàm main - điểm bắt đầu chương trình
    // (4) Thân hàm - các lệnh thực thi
    cout << "Hello, World!" << endl;
    
    return 0;           // (5) Kết thúc chương trình
}
```

#### (1) Khai báo thư viện: `#include <iostream>`

**Thư viện là gì?**
- Tập hợp các hàm, lớp được viết sẵn
- Giúp tái sử dụng code, tiết kiệm thời gian

**`#include`:** Chỉ thị tiền xử lý (preprocessor directive)
- Chèn nội dung của file thư viện vào chương trình
- Thực hiện trước khi biên dịch

**`<iostream>`:** Thư viện xuất nhập chuẩn
- `i` = input (nhập)
- `o` = output (xuất)
- `stream` = luồng dữ liệu

**Các thư viện C++ phổ biến:**
```cpp
#include <iostream>     // Nhập xuất chuẩn (cin, cout)
#include <string>       // Xử lý chuỗi
#include <vector>       // Mảng động
#include <algorithm>    // Các thuật toán (sort, find...)
#include <cmath>        // Hàm toán học (sqrt, pow...)
#include <fstream>      // Đọc ghi file
```

#### (2) Namespace: `using namespace std;`

**Namespace là gì?**
- "Không gian tên" - tránh xung đột tên
- Nhóm các định danh (biến, hàm, lớp) lại với nhau

**`std`:** Standard namespace
- Chứa tất cả các thành phần của thư viện chuẩn C++
- `cout`, `cin`, `endl`, `string`, `vector`...

**Hai cách sử dụng:**

```cpp
// Cách 1: Khai báo using namespace
using namespace std;
cout << "Hello";

// Cách 2: Dùng std:: mỗi lần
std::cout << "Hello";
```

**Lưu ý:** 
- `using namespace std;` tiện lợi nhưng có thể gây xung đột trong dự án lớn
- Nên dùng `std::` trong code chuyên nghiệp

#### (3) Hàm main: `int main()`

**Hàm main là gì?**
- Điểm khởi đầu của mọi chương trình C++
- Chương trình bắt đầu thực thi từ dòng đầu tiên trong `main()`
- Mỗi chương trình C++ phải có duy nhất một hàm `main()`

**Cấu trúc:**
```cpp
int main() {
    // Code thực thi
    return 0;
}
```

**Giải thích:**
- `int`: Kiểu trả về của hàm (số nguyên)
- `main`: Tên hàm
- `()`: Danh sách tham số (rỗng hoặc `int argc, char* argv[]`)
- `{}`: Thân hàm - chứa các lệnh

#### (4) Câu lệnh xuất: `cout << "Hello, World!" << endl;`

**`cout`:** Console Output - xuất ra màn hình
- Đối tượng của lớp `ostream`
- Thuộc thư viện `<iostream>`

**`<<`:** Toán tử chèn (insertion operator)
- Đưa dữ liệu vào luồng xuất
- Có thể nối nhiều `<<` liên tiếp

**`"Hello, World!"`:** Chuỗi ký tự (string literal)
- Được bao bởi dấu ngoặc kép `""`

**`endl`:** End line - xuống dòng
- Tương đương `\n` nhưng còn xóa bộ đệm (flush)

**`;`:** Dấu chấm phẩy
- Kết thúc một câu lệnh
- **BẮT BUỘC** phải có

**Ví dụ khác:**
```cpp
cout << "Xin chao" << endl;
cout << "Toi la sinh vien" << endl;

// Xuất nhiều giá trị
int age = 20;
cout << "Tuoi: " << age << endl;

// Xuất không xuống dòng
cout << "Hello ";
cout << "World" << endl;  // Output: Hello World
```

#### (5) Return: `return 0;`

**Mục đích:**
- Trả về giá trị cho hệ điều hành
- Báo hiệu chương trình kết thúc

**Ý nghĩa giá trị:**
- `return 0;` - Chương trình chạy thành công
- `return 1;` (hoặc khác 0) - Có lỗi xảy ra

**Lưu ý:** 
- Trong hàm `main()`, nếu không viết `return 0;`, compiler tự động thêm
- Trong các hàm khác, **bắt buộc** phải có `return`

### Quy trình biên dịch và chạy

```
┌──────────────┐
│  Source Code │  hello.cpp
│  (.cpp)      │
└──────┬───────┘
       │
       ▼
┌──────────────┐
│ Preprocessor │  Xử lý #include, #define
└──────┬───────┘
       │
       ▼
┌──────────────┐
│   Compiler   │  Biên dịch → Object file (.o, .obj)
└──────┬───────┘
       │
       ▼
┌──────────────┐
│    Linker    │  Liên kết thư viện → Executable
└──────┬───────┘
       │
       ▼
┌──────────────┐
│  Executable  │  hello.exe (Windows) / hello (Linux)
│  (.exe)      │
└──────────────┘
```

**Các lệnh biên dịch:**

```bash
# Biên dịch và chạy
g++ hello.cpp -o hello
./hello

# Chỉ biên dịch (không liên kết)
g++ -c hello.cpp

# Biên dịch với cảnh báo
g++ -Wall hello.cpp -o hello

# Biên dịch với chuẩn C++
g++ -std=c++17 hello.cpp -o hello
```

### Ví dụ chương trình hoàn chỉnh

```cpp
/**
 * File: calculator.cpp
 * Mô tả: Chương trình tính tổng hai số
 * Tác giả: Your Name
 * Ngày: 11/01/2026
 */

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến
    int number1, number2, sum;
    
    // Nhập dữ liệu
    cout << "Nhap so thu nhat: ";
    cin >> number1;
    
    cout << "Nhap so thu hai: ";
    cin >> number2;
    
    // Tính toán
    sum = number1 + number2;
    
    // Xuất kết quả
    cout << "Tong cua " << number1 << " va " << number2;
    cout << " la: " << sum << endl;
    
    return 0;
}
```

**Output mẫu:**
```
Nhap so thu nhat: 5
Nhap so thu hai: 3
Tong cua 5 va 3 la: 8
```

### Các lỗi thường gặp

#### 1. Thiếu dấu chấm phẩy
```cpp
// Sai
cout << "Hello"
cout << "World";

// Đúng
cout << "Hello";
cout << "World";
```

#### 2. Thiếu thư viện
```cpp
// Sai - Thiếu #include <iostream>
int main() {
    cout << "Hello";  // Lỗi: cout chưa được khai báo
    return 0;
}

// Đúng
#include <iostream>
using namespace std;

int main() {
    cout << "Hello";
    return 0;
}
```

#### 3. Viết sai tên hàm main
```cpp
// Sai
int Main() {  // M hoa
    return 0;
}

// Đúng
int main() {  // m thường
    return 0;
}
```

#### 4. Quên namespace
```cpp
#include <iostream>

int main() {
    cout << "Hello";  // Lỗi: cout chưa được khai báo
    return 0;
}

// Sửa cách 1
#include <iostream>
using namespace std;

int main() {
    cout << "Hello";
    return 0;
}

// Sửa cách 2
#include <iostream>

int main() {
    std::cout << "Hello";
    return 0;
}
```

#### 5. Thiếu dấu ngoặc
```cpp
// Sai
int main() 
    cout << "Hello";
    return 0;
}

// Đúng
int main() {
    cout << "Hello";
    return 0;
}
```

### Bài tập thực hành

**Bài 1:** Viết chương trình in ra tên và tuổi của bạn.

**Bài 2:** Viết chương trình tính hiệu hai số.

**Bài 3:** Viết chương trình in ra một hình chữ nhật bằng ký tự `*`.

**Bài 4:** Viết chương trình nhập vào bán kính hình tròn, tính và in ra chu vi và diện tích.

**Bài 5:** Viết chương trình đổi nhiệt độ từ Celsius sang Fahrenheit.

---

## Tổng kết

Chương này đã giới thiệu:
- Khái niệm cơ bản về máy tính và cách thức hoạt động
- Lý do máy tính có thể xử lý đa dạng lĩnh vực
- Ngôn ngữ lập trình và các quy ước khi viết code
- Giới thiệu về C++ và cấu trúc chương trình C++ cơ bản

Ở chương tiếp theo, chúng ta sẽ tìm hiểu về các kiểu dữ liệu cơ sở trong C++, biến, hằng số, và các phép toán

---

**Lưu ý:** Tài liệu này được biên soạn cho mục đích học tập. Vui lòng thực hành code thường xuyên để nắm vững kiến thức.