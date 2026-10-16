#include <stdio.h>
#include <conio.h>

int main() {
    char jenis;
    int jam;
    int total_tarif = 0;

    printf("=== Sistem Tarif Parkir ===\n");

    // Input dan validasi jenis kendaraan langsung di awal
    while (1) {
        printf("Pilih jenis kendaraan (M = Motor, O = Mobil): ");
        scanf(" %c", &jenis);

        if (jenis == 'M' || jenis == 'm' || jenis == 'O' || jenis == 'o') {
            break;
        }

        printf("\nError: yang parkir disini motor sama mobil doang ya allah\n\n");
    }

    printf("Masukkan lama parkir (jam): ");
    scanf("%d", &jam);

    // Validasi lama parkir
    if (jam <= 0) {
        printf("\nError: Lama parkir tidak valid!\n");
        return 1;
    }

    // Perhitungan tarif berdasarkan jenis kendaraan
    if (jenis == 'M' || jenis == 'm') {
        if (jam == 1) {
            total_tarif = 2000;
        } else {
            total_tarif = 2000 + (jam - 1) * 1000;
        }
        printf("\nJenis Kendaraan : Motor\n");
        printf("Lama Parkir     : %d jam\n", jam);
        printf("Total Tarif     : Rp%d\n", total_tarif);
    } else if (jenis == 'O' || jenis == 'o') {
        if (jam == 1) {
            total_tarif = 5000;
        } else {
            total_tarif = 5000 + (jam - 1) * 3000;
        }
        printf("\nJenis Kendaraan : Mobil\n");
        printf("Lama Parkir     : %d jam\n", jam);
        printf("Total Tarif     : Rp%d\n", total_tarif);
    }

    getch();
    return 0;
}
