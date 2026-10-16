# 🔁 Penjelasan Fitur Looping di `kasir.c`

> Penjelasan ini ditulis dengan bahasa sesederhana mungkin supaya gampang dimengerti!

---

## Berapa Banyak Loop di Program Ini?

Di program `kasir.c` ada **3 looping utama** dan **1 pengecekan `if` + `continue`** di dalamnya.
Masing-masing pakai tipe yang berbeda-beda sesuai kebutuhannya.

---

## 🔁 Loop 1 — `do-while` → Loop Pesan Makanan (Baris 38–80)

```c
do {
    // tampilkan menu, pilih makanan, masukin ke keranjang
    // ...
    printf("Ingin menambah pesanan lain? (y/n): ");
    scanf(" %c", &lanjut);
} while (lanjut == 'y' || lanjut == 'Y');
```

### Cara Kerjanya

Program ini akan **terus minta kamu milih makanan** selama kamu mau tambah pesanan.
Baru berhenti kalau kamu jawab `n` (tidak mau tambah lagi).

### Analoginya Kayak Gini 🧒

> Kamu lagi di warung. Abang warungnya bilang:
> 1. **"Mau pesen apa?"** → Kamu pilih makanan
> 2. **"Mau tambah lagi nggak?"**
>    - Kalau kamu jawab **"y"** → balik lagi ke langkah 1 (pesen lagi) 🔄
>    - Kalau kamu jawab **"n"** → selesai, lanjut bayar ✅

### Kenapa Pakai `do-while` dan Bukan `while` Biasa?

Karena kamu **pasti minimal pesan 1 kali dulu** sebelum ditanya *"mau tambah?"*.

- `do-while` = **Kerjakan dulu, baru cek kondisi**
- `while` biasa = **Cek kondisi dulu, baru kerjakan**

Kalau pakai `while` biasa, dia akan cek dulu sebelum ngapa-ngapain — nggak masuk akal kan kalau belum pesen udah ditanya *"mau tambah?"* 😄

### Alurnya

```
[Mulai]
   ↓
[Tampilkan Menu]
   ↓
[Input Pilihan Menu]
   ↓
[Input Jumlah Beli]
   ↓
[Simpan ke Keranjang]
   ↓
[Tanya: Mau tambah lagi? y/n]
   ↓
[y] → kembali ke atas 🔄
[n] → keluar loop ✅
```

---

## 🔁 Loop 2 — `do-while` → Loop Bayar (Baris 87–94)

```c
do {
    printf("Masukkan uang pembayaran: Rp ");
    scanf("%d", &uangBayar);

    if (uangBayar < totalBelanja) {
        printf("Uang Anda kurang Rp %d!\n", totalBelanja - uangBayar);
    }
} while (uangBayar < totalBelanja);
```

### Cara Kerjanya

Program ini akan **terus minta kamu masukin uang** selama uang yang kamu kasih masih kurang dari total belanja.
Baru berhenti kalau uang kamu sudah cukup atau lebih.

### Analoginya Kayak Gini 🧒

> Kamu mau bayar. Totalnya Rp 30.000.
> 1. Kamu kasih uang → *"Nih Rp 20.000"*
> 2. Abangnya cek: **kurang!** → *"Kurang Rp 10.000, kasih lagi dong"* 😅
> 3. Kamu kasih lagi → *"Nih Rp 50.000"*
> 4. Abangnya cek: **cukup!** → lanjut ke struk ✅

### Kenapa Pakai `do-while` Lagi?

Sama kayak loop 1 — kamu **pasti harus kasih uang minimal 1 kali dulu** baru dicek cukup atau nggak.
Nggak mungkin dicek dulu sebelum kamu kasih uang kan? 😄

### Alurnya

```
[Mulai Bayar]
   ↓
[Input Uang Bayar]
   ↓
[Cek: uangBayar < totalBelanja?]
   ↓
[YA, kurang] → tampilkan kekurangan → input uang lagi 🔄
[TIDAK, cukup] → keluar loop → hitung kembalian ✅
```

---

## 🔁 Loop 3 — `for` → Loop Tampil Menu & Cetak Struk (Baris 40–42 & 107–112)

### Tampilkan Daftar Menu (Baris 40–42)

```c
for (i = 0; i < 5; i++) {
    printf("[%d] %-20s : Rp %d\n", i + 1, menuNama[i], menuHarga[i]);
}
```

### Cetak Item di Struk (Baris 107–112)

```c
for (i = 0; i < totalItem; i++) {
    printf("%-20s %-4d Rp %-10d\n", 
           keranjang[i].nama, 
           keranjang[i].jumlah, 
           keranjang[i].subtotal);
}
```

### Cara Kerjanya

Program ini **mengulangi satu blok kode sebanyak jumlah item** — entah itu 5 menu atau sebanyak item yang dipesan.

### Analoginya Kayak Gini 🧒

> Kamu pesen 3 makanan. Abangnya nulis struk:
> - **i = 0** → tulis makanan pertama ✍️
> - **i = 1** → tulis makanan kedua ✍️
> - **i = 2** → tulis makanan ketiga ✍️
> - **i = 3** → udah 3? **berhenti!** ✋

### Kenapa Pakai `for` dan Bukan `do-while`?

Karena kita **sudah tau pasti mau ngulang berapa kali** (sebanyak 5 menu atau sebanyak `totalItem`).

- `for` = cocok kalau **jumlah pengulangannya sudah diketahui**
- `do-while` = cocok kalau **belum tau mau ngulang berapa kali**, tergantung input user

### Struktur `for` Loop Itu Gimana?

```
for (awal; kondisi; langkah) {
    // kode yang diulang
}

Contoh:
for (i = 0; i < 5; i++) {
  │         │       │
  │         │       └── Setiap putaran: i ditambah 1
  │         └────────── Terus jalan selama i kurang dari 5
  └──────────────────── Mulai dari i = 0
}
```

---

## 🧩 Bonus: `if` + `continue` di Dalam Loop Pemesanan (Baris 50 & 59)

```c
// Validasi 1 - nomor menu
if (pilihanMenu < 1 || pilihanMenu > 5) {
    printf("Pilihan menu tidak valid!\n");
    continue;  // ← LONCAT balik ke atas loop!
}

// Validasi 2 - jumlah beli
if (jumlahBeli <= 0) {
    printf("Jumlah harus lebih dari 0!\n");
    continue;  // ← LONCAT balik ke atas loop!
}
```

### Cara Kerjanya

`if` ini berfungsi sebagai **penjaga / validator** input user.
Kalau input salah, pakai kata kunci `continue` untuk **loncat kembali ke awal loop** tanpa mengeksekusi kode di bawahnya.

### Analoginya Kayak Gini 🧒

> **Validasi 1 — Nomor Menu:**
> 🧒 Kamu: *"Bang, pesen menu nomor 99"*
> 🧑‍🍳 Abang: *"Nggak ada menu 99! Pilih lagi dari awal!"*
> → Langsung balik ke tampilan menu, **skip** semua kode di bawahnya 🔄

> **Validasi 2 — Jumlah Beli:**
> 🧒 Kamu: *"Pesen Nasi Goreng, jumlahnya... 0"*
> 🧑‍🍳 Abang: *"Hah? 0 porsi? Nggak bisa! Isi ulang!"*
> → Langsung balik ke tampilan menu, **skip** semua kode di bawahnya 🔄

### `continue` itu Apa?

`continue` = tombol **"ulang dari awal"** dalam sebuah loop.
- Dia **tidak keluar** dari loop
- Dia **loncat** langsung ke awal putaran berikutnya
- Semua kode **setelah** `continue` di dalam loop akan di-skip

```
[Dalam Loop]
   ↓
[if kondisi salah?]
   ↓ YA
[continue] ──────────────→ kembali ke awal loop 🔄
   ↓ TIDAK
[lanjut kode berikutnya...]
```

---

## 📋 Rangkuman Semua Loop dalam Satu Tabel

| No | Loop | Tipe | Di Baris | Kapan Dipakai | Berhenti Kalau... |
|----|------|------|----------|---------------|-------------------|
| 1 | Pesan makanan | `do-while` | 38–80 | Pasti jalan minimal 1x, baru cek kondisi | User jawab `n` |
| 2 | Bayar | `do-while` | 87–94 | Pasti jalan minimal 1x, baru cek kondisi | Uang sudah cukup |
| 3 | Tampil menu | `for` | 40–42 | Sudah tau ngulang berapa kali (5x) | Sudah tampil 5 menu |
| 4 | Cetak struk | `for` | 107–112 | Sudah tau ngulang berapa kali | Semua item dicetak |
| 5 | Validasi input | `if` + `continue` | 50, 59 | Kalau input salah, loncat ke awal | — |

---

## 🎯 Perbedaan Singkat `while`, `do-while`, dan `for`

| Tipe | Cek Kondisi | Cocok Untuk |
|------|------------|-------------|
| `while` | Di **awal**, sebelum jalan | Kalau kemungkinan **tidak jalan sama sekali** |
| `do-while` | Di **akhir**, setelah jalan | Kalau **pasti jalan minimal 1 kali** |
| `for` | Di **awal**, sebelum jalan | Kalau **sudah tau mau ngulang berapa kali** |

---

> **File ini adalah penjelasan untuk:** `kasir.c`
> **Dibuat untuk:** Membantu memahami konsep looping dalam bahasa C dengan cara yang mudah dimengerti.
