# 🧾 Mini Kasir Warung SMK

Sebuah program kasir sederhana berbasis **terminal / command line** yang dibuat menggunakan bahasa **C**. Program ini mensimulasikan sistem kasir warung makan — mulai dari memilih menu, menghitung total belanja, hingga mencetak struk pembayaran.

---

## 📋 Daftar Isi

- [Fitur](#-fitur)
- [Prasyarat](#-prasyarat)
- [Cara Instalasi & Kompilasi](#-cara-instalasi--kompilasi)
- [Cara Menjalankan Program](#-cara-menjalankan-program)
- [Alur Penggunaan Program](#-alur-penggunaan-program)
- [Contoh Output](#-contoh-output)
- [Struktur Kode](#-struktur-kode)
- [Teknologi yang Digunakan](#-teknologi-yang-digunakan)

---

## ✨ Fitur

- 📋 Menampilkan **daftar menu** beserta harga
- 🛒 **Menambah pesanan** sebanyak yang diinginkan ke keranjang
- ✅ **Validasi input** — nomor menu dan jumlah tidak boleh salah/kosong
- 💳 **Proses pembayaran** dengan validasi uang (tidak boleh kurang)
- 🧾 **Cetak struk** otomatis lengkap dengan total belanja dan kembalian

---

## 🛠 Prasyarat

Sebelum menjalankan program ini, pastikan kamu sudah punya salah satu dari:

| Compiler | Platform | Link Download |
|----------|----------|---------------|
| **MinGW (GCC)** | Windows | [mingw-w64.org](https://www.mingw-w64.org/downloads/) |
| **GCC** | Linux / Mac | Sudah tersedia bawaan / via `apt` / `brew` |
| **Code::Blocks** | Windows / Linux / Mac | [codeblocks.org](https://www.codeblocks.org/downloads/) |
| **Dev-C++** | Windows | [sourceforge.net](https://sourceforge.net/projects/orwelldevcpp/) |

> **Catatan:** Program ini menggunakan `conio.h` (`getch()`) yang merupakan library khusus Windows.
> Jika dijalankan di Linux/Mac, hapus baris `#include <conio.h>` dan ganti `getch()` dengan `getchar()`.

---

## 📥 Cara Instalasi & Kompilasi

### 1. Clone atau Download Proyek Ini

```bash
# Clone via Git
git clone https://github.com/username/nama-repo.git

# Atau download ZIP lalu ekstrak
```

### 2. Masuk ke Folder Proyek

```bash
cd nama-repo
```

### 3. Kompilasi File `kasir.c`

Buka **terminal** (Command Prompt / PowerShell / Terminal) lalu jalankan:

```bash
gcc kasir.c -o kasir
```

Kalau berhasil, akan muncul file baru bernama `kasir.exe` (Windows) atau `kasir` (Linux/Mac) di folder yang sama.

> **Catatan:** Pastikan `gcc` sudah terdaftar di PATH sistem kamu.
> Cek dengan perintah `gcc --version`. Kalau muncul versi, berarti sudah siap! ✅

---

## ▶️ Cara Menjalankan Program

Setelah berhasil dikompilasi, jalankan dengan perintah:

**Windows:**
```bash
kasir.exe
```
atau
```bash
.\kasir.exe
```

**Linux / Mac:**
```bash
./kasir
```

### Alternatif: Jalankan Langsung dari IDE

Jika menggunakan **Code::Blocks** atau **Dev-C++**:
1. Buka file `kasir.c`
2. Tekan **F9** (Build & Run) atau klik tombol ▶️ Run

---

## 🗺 Alur Penggunaan Program

Berikut langkah-langkah saat program dijalankan:

### Langkah 1 — Tampilan Awal
Program akan menampilkan header kasir dan daftar menu yang tersedia:
```
========================================
         MINI KASIR WARUNG SMK
========================================

--- DAFTAR MENU ---
[1] Nasi Goreng Spesial    : Rp 15000
[2] Mie Goreng Ayam        : Rp 12000
[3] Ayam Geprek + Nasi     : Rp 18000
[4] Es Teh Manis           : Rp 5000
[5] Es Jeruk Segar         : Rp 7000
```

### Langkah 2 — Pilih Menu
Ketik nomor menu yang ingin dipesan **(angka 1–5)**, lalu tekan Enter:
```
Pilih menu (1-5): 1
```
> ⚠️ Jika memasukkan angka di luar 1–5, program akan meminta input ulang.

### Langkah 3 — Masukkan Jumlah
Ketik berapa porsi yang ingin dibeli:
```
Jumlah yang dibeli: 2
```
> ⚠️ Jumlah tidak boleh 0 atau negatif.

### Langkah 4 — Tambah Pesanan atau Selesai
Program akan bertanya apakah ingin memesan lagi:
```
Ingin menambah pesanan lain? (y/n): y
```
- Ketik **`y`** → kembali ke menu, pesan lagi
- Ketik **`n`** → lanjut ke pembayaran

### Langkah 5 — Pembayaran
Masukkan jumlah uang yang dibayarkan:
```
Total yang harus dibayar: Rp 37000

Masukkan uang pembayaran: Rp 50000
```
> ⚠️ Jika uang kurang, program akan menampilkan kekurangan dan meminta input ulang.

### Langkah 6 — Struk Tercetak
Program otomatis mencetak struk dan menghitung kembalian:
```
========================================
            STRUK PEMBAYARAN
         MINI KASIR WARUNG KITA
========================================
Item                 Qty  Subtotal
----------------------------------------
Nasi Goreng Spesial  2    Rp 30000
Es Teh Manis         1    Rp 5000
Es Jeruk Segar       1    Rp 7000
----------------------------------------
Total Belanja            : Rp 42000
Tunai / Bayar            : Rp 50000
Kembalian                : Rp 8000
========================================
      TERIMA KASIH ATAS KUNJUNGANNYA!
========================================
```

### Langkah 7 — Tutup Program
Tekan tombol apa saja untuk menutup program.

---

## 💡 Contoh Output Lengkap

```
========================================
         MINI KASIR WARUNG SMK
========================================

--- DAFTAR MENU ---
[1] Nasi Goreng Spesial    : Rp 15000
[2] Mie Goreng Ayam        : Rp 12000
[3] Ayam Geprek + Nasi     : Rp 18000
[4] Es Teh Manis           : Rp 5000
[5] Es Jeruk Segar         : Rp 7000
----------------------------------------
Pilih menu (1-5): 1
Jumlah yang dibeli: 2
Berhasil menambahkan Nasi Goreng Spesial x 2 ke pesanan.

Ingin menambah pesanan lain? (y/n): y

--- DAFTAR MENU ---
...
Pilih menu (1-5): 4
Jumlah yang dibeli: 1
Berhasil menambahkan Es Teh Manis x 1 ke pesanan.

Ingin menambah pesanan lain? (y/n): n

========================================
Total yang harus dibayar: Rp 35000
========================================
Masukkan uang pembayaran: Rp 20000
Uang Anda kurang Rp 15000! Silakan masukkan uang yang cukup.

Masukkan uang pembayaran: Rp 50000


========================================
            STRUK PEMBAYARAN
         MINI KASIR WARUNG KITA
========================================
Item                 Qty  Subtotal
----------------------------------------
Nasi Goreng Spesial  2    Rp 30000
Es Teh Manis         1    Rp 5000
----------------------------------------
Total Belanja            : Rp 35000
Tunai / Bayar            : Rp 50000
Kembalian                : Rp 15000
========================================
      TERIMA KASIH ATAS KUNJUNGANNYA!
========================================

Tekan tombol apa saja untuk menutup program...
```

---

## 🗂 Struktur Kode

```
📁 projek_kasir/
│
├── 📄 kasir.c                    ← File utama program
├── 📄 README.md                  ← Dokumentasi ini
├── 📄 flowchart_kasir.md         ← Flowchart alur program
└── 📄 penjelasan_looping_kasir.md ← Penjelasan cara kerja loop
```

### Penjelasan Singkat Kode

| Bagian | Baris | Fungsi |
|--------|-------|--------|
| `struct Pesanan` | 6–11 | Menyimpan data tiap item pesanan (nama, harga, jumlah, subtotal) |
| Deklarasi menu | 15–22 | Array berisi 5 nama menu dan harganya |
| Loop pemesanan (`do-while`) | 38–80 | Proses memilih menu dan menambah ke keranjang |
| Validasi menu (`if`) | 50–53 | Cek nomor menu harus antara 1–5 |
| Validasi jumlah (`if`) | 59–62 | Cek jumlah beli harus lebih dari 0 |
| Loop pembayaran (`do-while`) | 87–94 | Proses pembayaran, uang harus cukup |
| Cetak struk (`for`) | 107–112 | Mencetak semua item pesanan satu per satu |

---

## 🧰 Teknologi yang Digunakan

- **Bahasa:** C (C99)
- **Library:**
  - `stdio.h` — untuk input/output (`printf`, `scanf`)
  - `conio.h` — untuk `getch()` menahan layar (Windows)
  - `string.h` — untuk `strcpy()` menyalin string
- **Konsep Pemrograman:**
  - Struct
  - Array
  - Loop `do-while` dan `for`
  - Kondisi `if` dan `continue`

---

## 👤 Author

> Dibuat sebagai proyek belajar bahasa C.
> Cocok untuk pemula yang ingin belajar konsep **struct, array, dan looping** dalam C.

---

*Semoga bermanfaat! Jangan lupa kasih ⭐ kalau proyek ini membantu kamu belajar!* 😊
