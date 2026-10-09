# CLAUDE.md

## Tổng quan
Code-C-Practice là bộ bài tập lập trình C/C++ môn Tin học cơ sở (bài luyện thuật toán/OOP cơ bản kiểu PTIT online judge). Mỗi bài là **một file nguồn độc lập** có hàm `main`, đọc từ `cin` và in ra `cout`.

## Cấu trúc
- Thư mục gốc phẳng, ~227 file `.cpp` + 1 file `.c` (`Untitled4.c`); không có Makefile/CMake/test.
- Tên file: mã bài PTIT dạng `CPPxxxx.cpp` (vd `CPP0104.cpp` tính tổng 1/i) hoặc tên không dấu theo đề (`songuyento.cpp`, `hoanvi.cpp`, `tamgiacso1.cpp`...); một số là file nháp (`Untitled*.cpp`, `test.cpp`, `xx*.cpp`, `hihi.cpp`). `CPP0139.cpp` đang rỗng.
- Chủ đề: số học (nguyên tố, ước/bội, số hoàn hảo, Fibonacci), xử lý mảng/ma trận, xâu ký tự, hình vẽ bằng ký tự, hoán vị/quay lui, khai báo lớp (sinh viên, nhân viên, phân số, kho hàng, danh sách phim...).
- `DATA.txt` — dữ liệu mẫu cho một vài bài đọc từ file.
- Một file có tên chứa dấu cách/ký tự Unicode (`Quản lý kho hàng.cpp`, `Game ban sung vao bia.cpp`, `so smith.cpp`...) — cẩn thận khi dùng shell.

## Biên dịch và chạy
```bash
g++ -std=c++17 -O2 CPP0104.cpp -o CPP0104
echo 3 | ./CPP0104
```
Nhiều bài dùng `#include <bits/stdc++.h>` (chỉ GCC/Clang, không chạy trên MSVC).

## Quy tắc khi làm việc
- Đây là bài làm cá nhân đã nộp: không tự sửa logic, đổi tên hay xóa file nếu chưa được yêu cầu.
- Không commit file nhị phân biên dịch (`*.exe`, `*.o`, ... — đã có trong `.gitignore`).
- Nếu muốn tổ chức lại thư mục (vd nhóm theo chủ đề), hỏi trước vì có thể đã có liên kết tới tên file hiện tại.
