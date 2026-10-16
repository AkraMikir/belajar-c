#include <stdio.h>
#include <conio.h>

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

float bagi(float a, float b) {
    // cek biar tidak terjadi error pembagian dengan nol
    if (b == 0) {
        printf("Error: Tidak bisa membagi dengan angka nol!\n");
        return 0;
    }
    return a / b;
}

int hitung_pangkat(int basis, int eksponen) {
    int hasil = 1;
    int i;
    for (i = 1; i <= eksponen; i++) {
        hasil = hasil * basis;
    }
    return hasil;
}

long long faktorial(int n) {
    long long total = 1;
    int i;
    // hitung perkalian mundur sampai angka 1
    for (i = 1; i <= n; i++) {
        total = total * i;
    }
    return total;
}

int main() {
    int pilihan;
    int bil1, bil2;

    printf("=== Pustaka Matematika Mini ===\n");
    printf("1. Tambah (+)\n");
    printf("2. Kurang (-)\n");
    printf("3. Kali (*)\n");
    printf("4. Bagi (/)\n");
    printf("5. Pangkat (^)\n");
    printf("6. Faktorial (!)\n");
    printf("Pilih menu (1-6): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("\nMasukkan bilangan 1: ");
            scanf("%d", &bil1);
            printf("Masukkan bilangan 2: ");
            scanf("%d", &bil2);
            printf("Hasil: %d + %d = %d\n", bil1, bil2, tambah(bil1, bil2));
            break;
        case 2:
            printf("\nMasukkan bilangan 1: ");
            scanf("%d", &bil1);
            printf("Masukkan bilangan 2: ");
            scanf("%d", &bil2);
            printf("Hasil: %d - %d = %d\n", bil1, bil2, kurang(bil1, bil2));
            break;
        case 3:
            printf("\nMasukkan bilangan 1: ");
            scanf("%d", &bil1);
            printf("Masukkan bilangan 2: ");
            scanf("%d", &bil2);
            printf("Hasil: %d * %d = %d\n", bil1, bil2, kali(bil1, bil2));
            break;
        case 4:
            printf("\nMasukkan bilangan 1: ");
            scanf("%d", &bil1);
            printf("Masukkan bilangan 2: ");
            scanf("%d", &bil2);
            if (bil2 != 0) {
                printf("Hasil: %d / %d = %.2f\n", bil1, bil2, bagi((float)bil1, (float)bil2));
            } else {
                bagi((float)bil1, (float)bil2);
            }
            break;
        case 5:
            printf("\nMasukkan basis  : ");
            scanf("%d", &bil1);
            printf("Masukkan pangkat: ");
            scanf("%d", &bil2);
            if (bil2 < 0) {
                printf("Error: Pangkat negatif belum didukung.\n");
            } else {
                printf("Hasil: %d ^ %d = %d\n", bil1, bil2, hitung_pangkat(bil1, bil2));
            }
            break;
        case 6:
            printf("\nMasukkan angka: ");
            scanf("%d", &bil1);
            if (bil1 < 0) {
                printf("Error: Faktorial harus bilangan non-negatif.\n");
            } else {
                printf("Hasil: %d! = %lld\n", bil1, faktorial(bil1));
            }
            break;
        default:
            printf("\nPilihan tidak valid!\n");
            break;
    }

    getch();
    return 0;
}
