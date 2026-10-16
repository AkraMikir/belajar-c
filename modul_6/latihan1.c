#include <stdio.h>
#include <conio.h>

int isGenap(int angka) {
    // kalau sisa bagi 2 sama dengan nol berarti genap
    if (angka % 2 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int bilangan;

    printf("=== Program Cek Bilangan Genap ===\n");
    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &bilangan);

    if (isGenap(bilangan)) {
        printf("Bilangan %d adalah genap.\n", bilangan);
    } else {
        printf("Bilangan %d adalah ganjil.\n", bilangan);
    }

    getch();
    return 0;
}
