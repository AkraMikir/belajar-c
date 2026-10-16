# 📚 Repositori Belajar Bahasa C & Tugas SMK

Selamat datang di repositori belajar pemrograman **Bahasa C**. Repositori ini telah dirapikan ke dalam struktur folder modular agar rapi, terorganisir, dan mudah dipelajari.

---

## 🗂 Struktur Direktori

```text
📁 belajar c/
│
├── 📁 projek_kasir/             # 🧾 Proyek Aplikasi Mini Kasir Warung SMK
│   ├── 📄 kasir.c               # Source code utama aplikasi kasir
│   ├── 📄 README.md             # Dokumentasi lengkap sistem kasir
│   ├── 📄 flowchart_kasir.md    # Diagram alur program (Mermaid flowchart)
│   └── 📄 penjelasan_looping_kasir.md # Penjelasan detail do-while & loop
│
├── 📁 tugas_pak_reza/           # 📚 Tugas Praktikum Pemrograman C
│   ├── 📄 tugas1.c              # Biodata Diri, Segitiga Bintang, Struk Belanja
│   ├── 📄 tugas2.c              # Konversi Suhu, Ukuran Tipe Data, Type Casting
│   ├── 📄 README.md             # Catatan & rincian tugas
│   ├── 📁 screenshots/          # Bukti tangkapan layar hasil eksekusi program
│   │   ├── Screenshot_tugas1.png
│   │   ├── Screenshot_tugas2.png
│   │   ├── tugas1.png
│   │   └── tugas2.png
│   └── 📁 arsip_zip/            # Arsip zip pengumpulan tugas
│       ├── tugas1.zip
│       └── tugas2.zip
│
├── 📁 latihan_dasar/            # 💻 Latihan & Pembelajaran Konsep Dasar C
│   ├── 📄 array.c               # Latihan dasar struktur array
│   ├── 📄 break.c               # Program dasar Hello World
│   ├── 📄 main.c                # Kalkulator operasi aritmatika (+, -, *, /)
│   ├── 📄 luas.c                # Aplikasi penghitung luas bangun datar
│   ├── 📄 piramida.c            # Pola perulangan segitiga piramida bintang
│   └── 📄 README.md             # Panduan dan penjelasan kode latihan dasar
│
├── 📁 bin/                      # ⚙️ Folder Output Executable (.exe)
│   ├── break.exe
│   ├── luas.exe
│   ├── main.exe
│   └── piramida.exe
│
├── 📁 arsip_web/                # 🌐 File template web (HTML / JS)
│   ├── index.html
│   └── script.js
│
├── 📁 .vscode/                  # 🛠 Konfigurasi compiler MinGW & debugger VS Code
├── 📄 .gitignore                # Filter file binary & build agar tidak mengotori git
└── 📄 README.md                 # Dokumentasi utama (file ini)
```

---

## 🚀 Panduan Kompilasi & Menjalankan Program

Pastikan compiler **GCC (MinGW)** sudah terpasang di sistem. Cek dengan perintah:
```bash
gcc --version
```

### 1. Menjalankan Projek Kasir
Masuk ke folder `projek_kasir`:
```bash
cd "projek_kasir"
gcc kasir.c -o kasir.exe
.\kasir.exe
```

### 2. Menjalankan Tugas Pak Reza
Masuk ke folder `tugas_pak_reza`:
```bash
cd "tugas_pak_reza"
gcc tugas1.c -o tugas1.exe
.\tugas1.exe

gcc tugas2.c -o tugas2.exe
.\tugas2.exe
```

### 3. Menjalankan Latihan Dasar
Masuk ke folder `latihan_dasar`:
```bash
cd "latihan_dasar"

# Kalkulator
gcc main.c -o kalkulator.exe
.\kalkulator.exe

# Hitung Luas
gcc luas.c -o luas.exe
.\luas.exe

# Piramida Bintang
gcc piramida.c -o piramida.exe
.\piramida.exe

# Array
gcc array.c -o array.exe
.\array.exe
```

---

## 💡 Tips & Catatan
- File executable (`.exe`) dan object file (`.o`) sebaiknya tidak dicampur dengan source code `.c` agar folder tetap bersih.
- Program yang menggunakan pustaka Windows `<conio.h>` (`getch()`) dapat dijalankan langsung di terminal Windows.
