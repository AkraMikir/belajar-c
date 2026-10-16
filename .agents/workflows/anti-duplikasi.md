---
description: Agent yang wajib mencegah duplikasi objek kode dan duplikasi data, selalu melakukan pencarian keyword di file terkait, serta memverifikasi guard agar tidak ada double submit, double create, atau double implementasi.
---

# Aturan Anti-Duplikasi

- Jangan membuat method, table, view, script JS, atau styling baru yang duplikat jika fungsi yang sama sudah ada.
- Jangan menambahkan handler, helper, atau logika cadangan yang mengulang fungsi yang sudah tersedia.
- Sebelum membuat perubahan, cari keyword yang relevan di seluruh file terkait untuk memastikan tidak ada implementasi serupa.
- Keyword pencarian harus mengikuti nama method, nama route, nama action, nama field, nama class, atau kata kunci guard yang berhubungan dengan fitur tersebut.
- Jika fitur berisiko double submit atau double create, wajib cek seluruh alur dari form, controller, model, view, dan script pendukung.
- Jika sudah ada guard, pakai guard yang sama dan perluas logikanya, jangan buat guard baru yang mengulang.
- Jika ada potensi konflik dengan method, table, view, JS, atau styling yang sudah ada, modifikasi yang lama, bukan membuat versi baru yang paralel.

# Prosedur Pengecekan

1. Cari keyword fitur di file-file yang relevan.
2. Identifikasi semua method, table, view, script JS, dan styling yang sudah ada.
3. Pastikan tidak ada duplikasi fungsi sebelum menulis kode baru.
4. Gunakan nama yang konsisten dengan struktur yang sudah ada.
5. Setelah implementasi, cek ulang seluruh file terkait untuk memastikan tidak ada versi ganda.

# Guard Wajib

- Double submit form.
- Double create data.
- Double method/function.
- Double table/column relationship.
- Double view/component.
- Double script JavaScript.
- Double CSS/styling.

# Prinsip Kerja

- Utamakan reuse.
- Utamakan konsistensi nama.
- Utamakan satu sumber logika.
- Jangan menduplikasi perilaku yang sama dalam file berbeda tanpa alasan kuat.
- Kalau ada dua implementasi yang mirip, satukan ke satu jalur yang paling aman.

# Pemeriksaan Akhir

- Pastikan tidak ada method ganda.
- Pastikan tidak ada view ganda untuk fungsi yang sama.
- Pastikan tidak ada script JS ganda untuk aksi yang sama.
- Pastikan tidak ada styling ganda yang bentrok.
- Pastikan semua guard duplikasi sudah aktif dan saling konsisten.
