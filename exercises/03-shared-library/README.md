# Bài tập 3: Shared library với CMake

Cấu trúc dùng CMake cho dự án chia sẻ mã giữa thư viện động và ứng dụng ví dụ.

## Cách build & chạy
```bash
cmake -S . -B build
cmake --build build
./build/textutils-demo
```

## Mục tiêu học
- Tạo shared library (`.so`/`.dll`) với CMake.
- Quản lý include path thông qua `target_include_directories`.
- Liên kết executable với thư viện động vừa build.
