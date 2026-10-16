# 💻 Latihan Dasar Pemrograman C

Folder ini berisi kumpulan kode latihan dasar bahasa C untuk memahami konsep-konsep fundamental seperti sintaks dasar, percabangan (`if-else`), perulangan (`for`), fungsi, dan array.

---

## 📁 Daftar Program & Penjelasan

| Nama File | Topik / Deskripsi | Konsep yang Dipelajari |
|-----------|-------------------|------------------------|
| `break.c` | Program awal Hello World | Struktur dasar file C, `printf()`, fungsi `main()` |
| `main.c` | Kalkulator sederhana operasi aritmatika (`+`, `-`, `*`, `/`) | Input `scanf()`, variabel `int` & `float`, percabangan `if-else if-else` |
| `luas.c` | Aplikasi penghitung luas bangun datar (lingkaran, segitiga, persegi, persegi panjang) | Pembuatan fungsi buatan (`float luasLingkaran`, dll.), return value |
| `piramida.c` | Pola piramida bintang bertingkat | Perulangan bersarang (`nested for loop`) |
| `array.c` | Akses elemen array satu dimensi | Inisialisasi array, indexing elemen array |

---

## 🛠 Cara Kompilasi & Menjalankan

Buka terminal di dalam folder ini (`d:\belajar c\latihan_dasar`), lalu jalankan perintah `gcc`:

### 1. Hello World (`break.c`)
```bash
gcc break.c -o break.exe
.\break.exe
```

### 2. Kalkulator Sederhana (`main.c`)
```bash
gcc main.c -o main.exe
.\main.exe
```

### 3. Hitung Luas Bangun Datar (`luas.c`)
```bash
gcc luas.c -o luas.exe
.\luas.exe
```

### 4. Piramida Bintang (`piramida.c`)
```bash
gcc piramida.c -o piramida.exe
.\piramida.exe
```

### 5. Array Dasar (`array.c`)
```bash
gcc array.c -o array.exe
.\array.exe
```
