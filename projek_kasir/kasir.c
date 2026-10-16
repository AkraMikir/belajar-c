#include <stdio.h>
#include <conio.h>
#include <string.h>

// Struktur data untuk menyimpan barang yang dibeli
struct Pesanan {
    char nama[30];
    int harga;
    int jumlah;
    int subtotal;
};

int main() {
    // Daftar menu yang tersedia
    char menuNama[5][30] = {
        "Nasi Goreng Spesial",
        "Mie Goreng Ayam",
        "Ayam Geprek + Nasi",
        "Es Teh Manis",
        "Es Jeruk Segar"
    };
    int menuHarga[5] = {15000, 12000, 18000, 5000, 7000};

    struct Pesanan keranjang[50];
    int totalItem = 0;
    int pilihanMenu, jumlahBeli;
    char lanjut;
    int totalBelanja = 0;
    int uangBayar = 0;
    int uangKembalian = 0;
    int i;

    printf("========================================\n");
    printf("         MINI KASIR WARUNG SMK         \n");
    printf("========================================\n");

    // Loop pemesanan menu
    do {
        printf("\n--- DAFTAR MENU ---\n");
        for (i = 0; i < 5; i++) {
            printf("[%d] %-20s : Rp %d\n", i + 1, menuNama[i], menuHarga[i]);
        }
        printf("----------------------------------------\n");

        // Input pilihan menu
        printf("Pilih menu (1-5): ");
        scanf("%d", &pilihanMenu);

        // Validasi input nomor menu
        if (pilihanMenu < 1 || pilihanMenu > 5) {
            printf("Pilihan menu tidak valid! Silakan pilih antara 1 - 5.\n");
            continue;
        }

        // Input jumlah beli
        printf("Jumlah yang dibeli: ");
        scanf("%d", &jumlahBeli);

        if (jumlahBeli <= 0) {
            printf("Jumlah harus lebih dari 0!\n");
            continue;
        }

        // Simpan ke keranjang belanja
        int indexMenu = pilihanMenu - 1;
        strcpy(keranjang[totalItem].nama, menuNama[indexMenu]);
        keranjang[totalItem].harga = menuHarga[indexMenu];
        keranjang[totalItem].jumlah = jumlahBeli;
        keranjang[totalItem].subtotal = menuHarga[indexMenu] * jumlahBeli;

        totalBelanja += keranjang[totalItem].subtotal;
        totalItem++;

        printf("Berhasil menambahkan %s x %d ke pesanan.\n", menuNama[indexMenu], jumlahBeli);

        // Tanya apakah ingin menambah pesanan lagi
        printf("\nIngin menambah pesanan lain? (y/n): ");
        scanf(" %c", &lanjut);

    } while (lanjut == 'y' || lanjut == 'Y');

    // Proses Pembayaran
    printf("\n========================================\n");
    printf("Total yang harus dibayar: Rp %d\n", totalBelanja);
    printf("========================================\n");

    do {
        printf("Masukkan uang pembayaran: Rp ");
        scanf("%d", &uangBayar);

        if (uangBayar < totalBelanja) {
            printf("Uang Anda kurang Rp %d! Silakan masukkan uang yang cukup.\n\n", totalBelanja - uangBayar);
        }
    } while (uangBayar < totalBelanja);

    uangKembalian = uangBayar - totalBelanja;

    // CETAK STRUK PEMBAYARAN
    printf("\n\n");
    printf("========================================\n");
    printf("            STRUK PEMBAYARAN            \n");
    printf("         MINI KASIR WARUNG KITA         \n");
    printf("========================================\n");
    printf("%-20s %-4s %-12s\n", "Item", "Qty", "Subtotal");
    printf("----------------------------------------\n");

    for (i = 0; i < totalItem; i++) {
        printf("%-20s %-4d Rp %-10d\n", 
               keranjang[i].nama, 
               keranjang[i].jumlah, 
               keranjang[i].subtotal);
    }

    printf("----------------------------------------\n");
    printf("%-25s: Rp %d\n", "Total Belanja", totalBelanja);
    printf("%-25s: Rp %d\n", "Tunai / Bayar", uangBayar);
    printf("%-25s: Rp %d\n", "Kembalian", uangKembalian);
    printf("========================================\n");
    printf("      TERIMA KASIH ATAS KUNJUNGANNYA!   \n");
    printf("========================================\n");

    printf("\nTekan tombol apa saja untuk menutup program...");
    getch(); // Menahan jendela agar tidak langsung tertutup

    return 0;
}
