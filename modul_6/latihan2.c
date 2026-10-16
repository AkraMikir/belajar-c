#include <stdio.h>
#include <conio.h>

int maks3(int a, int b, int c) {
    int terbesar = a;

    // bandingkan dengan nilai kedua dan ketiga
    if (b > terbesar) {
        terbesar = b;
    }
    if (c > terbesar) {
        terbesar = c;
    }

    return terbesar;
}

int main() {
    int bil1, bil2, bil3, hasil;

    printf("=== Program Mencari Nilai Terbesar (maks3) ===\n");
    printf("Masukkan bilangan pertama : ");
    scanf("%d", &bil1);
    printf("Masukkan bilangan kedua   : ");
    scanf("%d", &bil2);
    printf("Masukkan bilangan ketiga  : ");
    scanf("%d", &bil3);

    hasil = maks3(bil1, bil2, bil3);

    printf("\nNilai terbesar dari ketiga bilangan tersebut adalah: %d\n", hasil);

    getch();
    return 0;
}
