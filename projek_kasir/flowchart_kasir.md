# 📊 Flowchart Sistem Kasir — `kasir.c`

## 1. Penjelasan Bentuk-Bentuk Diagram (Simbol Flowchart)

Berikut adalah simbol-simbol standar flowchart yang digunakan dalam diagram sistem kasir ini:

| No | Simbol | Bentuk | Fungsi / Keterangan |
|----|--------|--------|---------------------|
| 1 | **Terminator** | Oval / Stadium `([...])` | Menandakan **awal (Start)** dan **akhir (End)** dari program |
| 2 | **Process** | Persegi Panjang `[...]` | Menandakan **proses / operasi** yang dilakukan (misal: hitung total, simpan data) |
| 3 | **Decision** | Belah Ketupat `{...}` | Menandakan **percabangan / kondisi IF** yang menghasilkan Ya/Tidak |
| 4 | **Input/Output** | Jajaran Genjang `[/...\]` | Menandakan **operasi input** dari user atau **output** ke layar |
| 5 | **Predefined Process** | Persegi Panjang Bergaris Ganda `[[...]]` | Menandakan **sub-proses / blok kode** yang sudah terdefinisi |
| 6 | **Loop Connector** | Panah kembali ke node sebelumnya | Menandakan **perulangan (loop)** seperti `do-while` |

---

## 2. Flowchart Utama — Alur Keseluruhan Program

Flowchart ini menggambarkan alur **keseluruhan** program kasir dari awal sampai akhir.

```mermaid
flowchart TD
    A(["🟢 START"])
    B[/"Deklarasi variabel:<br/>menuNama, menuHarga,<br/>keranjang, totalItem=0,<br/>totalBelanja=0, dll."/]
    C[/"Output: Header<br/>'MINI KASIR WARUNG SMK'"/]
    D[["🔁 LOOP PEMESANAN<br/>(do-while)"]]
    E[["💳 LOOP PEMBAYARAN<br/>(do-while)"]]
    F["Hitung kembalian:<br/>uangKembalian = uangBayar - totalBelanja"]
    G[["🧾 CETAK STRUK"]]
    H[/"Output: 'TERIMA KASIH<br/>ATAS KUNJUNGANNYA!'"/]
    I["getch() — Menahan layar"]
    J(["🔴 END<br/>return 0"])

    A --> B --> C --> D --> E --> F --> G --> H --> I --> J
```

---

## 3. Flowchart Detail — Loop Pemesanan (do-while #1)

Bagian ini adalah inti dari proses pemesanan. Terdapat **2 percabangan IF** dan **1 loop do-while**.

```mermaid
flowchart TD
    START_LOOP(["Masuk Loop Pemesanan"])
    
    MENU[/"Output: Tampilkan DAFTAR MENU<br/>for i=0 to 4:<br/>[i+1] namaMenu : Rp harga"/]
    
    INPUT1[/"Input: Pilih menu 1-5<br/>scanf pilihanMenu"/]
    
    IF1{"pilihanMenu < 1<br/>ATAU<br/>pilihanMenu > 5 ?"}
    
    ERR1[/"Output: 'Pilihan menu<br/>tidak valid!'"/]
    
    INPUT2[/"Input: Jumlah yang dibeli<br/>scanf jumlahBeli"/]
    
    IF2{"jumlahBeli <= 0 ?"}
    
    ERR2[/"Output: 'Jumlah harus<br/>lebih dari 0!'"/]
    
    PROSES1["indexMenu = pilihanMenu - 1"]
    PROSES2["Simpan ke keranjang:<br/>keranjang totalItem .nama = menuNama indexMenu<br/>keranjang totalItem .harga = menuHarga indexMenu<br/>keranjang totalItem .jumlah = jumlahBeli<br/>keranjang totalItem .subtotal = harga x jumlah"]
    PROSES3["totalBelanja += subtotal<br/>totalItem++"]
    
    OUTPUT1[/"Output: 'Berhasil menambahkan<br/>nama x jumlah ke pesanan'"/]
    
    INPUT3[/"Input: 'Ingin menambah<br/>pesanan lain? y/n'<br/>scanf lanjut"/]
    
    IF3{"lanjut == 'y'<br/>ATAU<br/>lanjut == 'Y' ?"}
    
    EXIT_LOOP(["Keluar Loop Pemesanan<br/>Lanjut ke Pembayaran"])

    START_LOOP --> MENU --> INPUT1 --> IF1
    
    IF1 -- "Ya - tidak valid" --> ERR1 --> MENU
    IF1 -- "Tidak - valid" --> INPUT2 --> IF2
    
    IF2 -- "Ya - jumlah 0 atau kurang" --> ERR2 --> MENU
    IF2 -- "Tidak - jumlah lebih dari 0" --> PROSES1 --> PROSES2 --> PROSES3 --> OUTPUT1 --> INPUT3 --> IF3
    
    IF3 -- "Ya - tambah lagi" --> MENU
    IF3 -- "Tidak - selesai pesan" --> EXIT_LOOP
```

### Penjelasan Percabangan pada Loop Pemesanan:

| No | Kondisi IF | Lokasi di Kode | Aksi jika TRUE | Aksi jika FALSE |
|----|-----------|----------------|----------------|-----------------|
| 1 | `pilihanMenu < 1 \|\| pilihanMenu > 5` | Baris 50 | Tampilkan pesan error, `continue` (kembali ke awal loop) | Lanjut ke input jumlah |
| 2 | `jumlahBeli <= 0` | Baris 59 | Tampilkan pesan error, `continue` (kembali ke awal loop) | Lanjut simpan ke keranjang |
| 3 | `lanjut == 'y' \|\| lanjut == 'Y'` | Baris 80 | Kembali ke awal loop (tampilkan menu lagi) | Keluar loop, lanjut ke pembayaran |

---

## 4. Flowchart Detail — Loop Pembayaran (do-while #2)

Bagian ini memvalidasi apakah uang yang dibayarkan cukup.

```mermaid
flowchart TD
    START_PAY(["Masuk Loop Pembayaran"])
    
    TOTAL[/"Output: 'Total yang harus<br/>dibayar: Rp totalBelanja'"/]
    
    INPUT_PAY[/"Input: 'Masukkan uang<br/>pembayaran: Rp'<br/>scanf uangBayar"/]
    
    IF_PAY{"uangBayar < totalBelanja ?"}
    
    KURANG["Hitung kekurangan:<br/>kurang = totalBelanja - uangBayar"]
    ERR_PAY[/"Output: 'Uang Anda kurang<br/>Rp kurang!'"/]
    
    EXIT_PAY(["Keluar Loop Pembayaran<br/>Lanjut hitung kembalian"])

    START_PAY --> TOTAL --> INPUT_PAY --> IF_PAY
    
    IF_PAY -- "Ya - uang kurang" --> KURANG --> ERR_PAY --> INPUT_PAY
    IF_PAY -- "Tidak - uang cukup" --> EXIT_PAY
```

### Penjelasan Percabangan pada Loop Pembayaran:

| Kondisi IF | Lokasi di Kode | Aksi jika TRUE | Aksi jika FALSE |
|-----------|----------------|----------------|-----------------|
| `uangBayar < totalBelanja` | Baris 91 | Tampilkan kekurangan, minta input ulang | Keluar loop, uang diterima |

---

## 5. Flowchart Detail — Cetak Struk Pembayaran

```mermaid
flowchart TD
    START_STRUK(["Masuk Cetak Struk"])
    
    HEADER[/"Output: Header Struk<br/>'STRUK PEMBAYARAN'<br/>'MINI KASIR WARUNG KITA'"/]
    
    KOLOM[/"Output: Header Kolom<br/>'Item - Qty - Subtotal'"/]
    
    INIT["i = 0"]
    
    FOR_CHECK{"i < totalItem ?"}
    
    CETAK_ITEM[/"Output: keranjang i .nama,<br/>keranjang i .jumlah,<br/>keranjang i .subtotal"/]
    
    INCREMENT["i++"]
    
    FOOTER[/"Output:<br/>'Total Belanja: Rp totalBelanja'<br/>'Tunai atau Bayar: Rp uangBayar'<br/>'Kembalian: Rp uangKembalian'"/]
    
    EXIT_STRUK(["Selesai Cetak Struk"])

    START_STRUK --> HEADER --> KOLOM --> INIT --> FOR_CHECK
    
    FOR_CHECK -- "Ya - masih ada item" --> CETAK_ITEM --> INCREMENT --> FOR_CHECK
    FOR_CHECK -- "Tidak - semua item dicetak" --> FOOTER --> EXIT_STRUK
```

### Penjelasan Perulangan pada Cetak Struk:

| Tipe Loop | Lokasi di Kode | Kondisi | Fungsi |
|-----------|----------------|---------|--------|
| `for` loop | Baris 107-112 | `i < totalItem` | Mencetak setiap item dalam keranjang satu per satu |

---

## 6. Peta Struktur Data

```mermaid
classDiagram
    class Pesanan {
        char nama 30
        int harga
        int jumlah
        int subtotal
    }
    
    class VariabelUtama {
        char menuNama 5x30
        int menuHarga 5
        Pesanan keranjang 50
        int totalItem
        int pilihanMenu
        int jumlahBeli
        char lanjut
        int totalBelanja
        int uangBayar
        int uangKembalian
    }
    
    VariabelUtama --> Pesanan : "keranjang 50 item, menyimpan maks 50 pesanan"
```

---

## 7. Ringkasan Alur Sistem

```mermaid
flowchart LR
    A["1. Inisialisasi<br/>Menu dan Variabel"] --> B["2. Loop Pemesanan<br/>Pilih menu,<br/>validasi input,<br/>simpan ke keranjang"]
    B --> C["3. Loop Pembayaran<br/>Input uang,<br/>validasi cukup atau kurang"]
    C --> D["4. Hitung<br/>Kembalian"]
    D --> E["5. Cetak Struk<br/>Loop tampilkan<br/>semua item"]
    E --> F["6. Selesai<br/>getch + return 0"]
```

---

## 8. Tabel Ringkasan Seluruh Percabangan & Perulangan

| No | Tipe | Kode | Baris | Tujuan |
|----|------|------|-------|--------|
| 1 | `do-while` | `do { ... } while (lanjut == 'y')` | 38-80 | Loop utama pemesanan menu |
| 2 | `if` | `pilihanMenu < 1 \|\| pilihanMenu > 5` | 50 | Validasi nomor menu yang dipilih |
| 3 | `if` | `jumlahBeli <= 0` | 59 | Validasi jumlah pembelian |
| 4 | `for` | `for (i = 0; i < 5; i++)` | 40-42 | Menampilkan daftar menu |
| 5 | `do-while` | `do { ... } while (uangBayar < totalBelanja)` | 87-94 | Loop validasi pembayaran |
| 6 | `if` | `uangBayar < totalBelanja` | 91 | Cek apakah uang bayar cukup |
| 7 | `for` | `for (i = 0; i < totalItem; i++)` | 107-112 | Mencetak item di struk |

> **Catatan:** Program ini menggunakan `continue` pada validasi input (baris 52 dan baris 62) yang menyebabkan alur langsung **melompat kembali ke awal loop** tanpa mengeksekusi kode di bawahnya. Ini ditunjukkan pada flowchart sebagai panah yang kembali ke node "Tampilkan Daftar Menu".
