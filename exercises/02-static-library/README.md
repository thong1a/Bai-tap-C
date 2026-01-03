# Bài tập 2: Static library

Cấu trúc thư mục tách rõ `include/`, `src/` và `app/`. Bài tập hướng dẫn build thư viện tĩnh `libstats.a` và liên kết với ứng dụng minh họa.

## Cách build & chạy
```bash
make
./stats-demo
```

## Mục tiêu học
- Tổ chức mã nguồn theo header/implementation/app.
- Dùng `ar` để tạo static library.
- Liên kết ứng dụng với thư viện tĩnh đã build.
