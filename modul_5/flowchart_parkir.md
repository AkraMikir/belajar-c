# Flowchart: Sistem Tarif Parkir

## Diagram

```mermaid
flowchart TD
    A([START]) --> B[Tampilkan judul:\n=== Sistem Tarif Parkir ===]
    B --> C[/Input jenis kendaraan\nM = Motor, O = Mobil/]
    C --> D{Jenis == M/m\natau O/o?}
    D -- Tidak --> E[Tampilkan Error:\nyang parkir disini\nmotor sama mobil doang]
    E --> C
    D -- Ya --> F[/Input lama parkir\ndalam jam/]
    F --> G{jam <= 0?}
    G -- Ya --> H[Tampilkan Error:\nLama parkir tidak valid!]
    H --> I([EXIT / return 1])
    G -- Tidak --> J{Jenis == M/m?}
    J -- Ya --> K{jam == 1?}
    K -- Ya --> L[total_tarif = 2000]
    K -- Tidak --> M["total_tarif = 2000 + (jam-1) × 1000"]
    L --> N[Tampilkan:\nJenis: Motor\nLama Parkir: jam\nTotal Tarif: Rp total_tarif]
    M --> N
    J -- Tidak --> O{Jenis == O/o?}
    O -- Ya --> P{jam == 1?}
    P -- Ya --> Q[total_tarif = 5000]
    P -- Tidak --> R["total_tarif = 5000 + (jam-1) × 3000"]
    Q --> S[Tampilkan:\nJenis: Mobil\nLama Parkir: jam\nTotal Tarif: Rp total_tarif]
    R --> S
    N --> T[Tunggu tombol:\ngetch]
    S --> T
    T --> U([END / return 0])
```

---

## Penjelasan Tiap Blok

| Simbol | Arti |
|--------|------|
| Oval `([...])` | START / END — titik awal dan akhir program |
| Kotak `[...]` | Proses — perintah yang dijalankan |
| Jajaran genjang `/[...]/` | Input/Output — ambil input dari user atau cetak ke layar |
| Belah ketupat `{...}` | Keputusan (if/else) — cek kondisi, keluar dua arah |

---

## Alur Singkat

1. **Mulai** → tampilkan judul
2. **Input jenis** kendaraan → validasi loop sampai bener
3. **Input jam** → cek valid (harus > 0)
4. **Percabangan Motor** → hitung tarif Motor
5. **Percabangan Mobil** → hitung tarif Mobil
6. **Tampilkan hasil** → tunggu tombol → **Selesai**

---

## Rumus Tarif

**Motor (M):**
$$\text{Tarif} = 2000 + (\text{jam} - 1) \times 1000$$

**Mobil (O):**
$$\text{Tarif} = 5000 + (\text{jam} - 1) \times 3000$$

> Catatan: jika jam = 1, hanya dikenakan tarif jam pertama saja.
