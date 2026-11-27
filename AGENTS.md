# CLAUDE.md

## Tổng quan
Code-C-Practice là bộ bài tập lập trình C/C++ môn Tin học cơ sở (bài luyện thuật toán/OOP cơ bản kiểu PTIT online judge). Mỗi bài là **một file nguồn độc lập** có hàm `main`, đọc từ `cin` và in ra `cout`.

## Cấu trúc
- Ba thư mục: `ptit/` (73 bài mã PTIT `CPPxxxx.cpp`), `bai-tap/` (bài đặt tên theo đề), `nhap/` (file nháp). Không có Makefile/CMake/test.
- Tên file: mã bài PTIT dạng `CPPxxxx.cpp` nằm trong `ptit/` (vd `ptit/CPP0104.cpp` tính tổng 1/i); bài tên không dấu theo đề nằm trong `bai-tap/` (`bai-tap/songuyento.cpp`, `bai-tap/hoanvi.cpp`...); file nháp (`Untitled*.cpp`, `Untitled4.c`, `test.cpp`, `xx*.cpp`, `hihi.cpp`) nằm trong `nhap/`. `ptit/CPP0139.cpp` đang rỗng.
- Chủ đề: số học (nguyên tố, ước/bội, số hoàn hảo, Fibonacci), xử lý mảng/ma trận, xâu ký tự, hình vẽ bằng ký tự, hoán vị/quay lui, khai báo lớp (sinh viên, nhân viên, phân số, kho hàng, danh sách phim...).
- `ptit/DATA.txt` — dữ liệu mẫu của `ptit/CPP0801.cpp`; bài này mở file bằng đường dẫn tuyệt đối `C:\Users\Admin\...\DATA.TXT`, muốn chạy phải sửa đường dẫn đó.
- Một file có tên chứa dấu cách/ký tự Unicode (`Quản lý kho hàng.cpp`, `Game ban sung vao bia.cpp`, `so smith.cpp`...) — cẩn thận khi dùng shell.

## Biên dịch và chạy
```bash
g++ -std=c++17 -O2 ptit/CPP0104.cpp -o CPP0104
echo 3 | ./CPP0104
```
Nhiều bài dùng `#include <bits/stdc++.h>` (chỉ GCC/Clang, không chạy trên MSVC).

## Quy tắc khi làm việc
- Đây là bài làm cá nhân đã nộp: không tự sửa logic, đổi tên hay xóa file nếu chưa được yêu cầu.
- Không commit file nhị phân biên dịch (`*.exe`, `*.o`, ... — đã có trong `.gitignore`).
- Cấu trúc thư mục đã sắp xếp lại 2026-11 (`ptit/`, `bai-tap/`, `nhap/`); giữ nguyên tên file khi thêm bài mới.
