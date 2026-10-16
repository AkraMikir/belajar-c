#include <stdio.h>
#include <conio.h>

int pangkat(int basis, int eksponen) {
    // basis rekursi: angka dipangkatkan 0 hasilnya 1
    if (eksponen == 0) {
        return 1;
    }
    return basis * pangkat(basis, eksponen - 1);
}

int main() {
    int basis, eksponen, hasil;

    printf("=== Program Pangkat Rekursif ===\n");
    printf("Masukkan angka basis   : ");
    scanf("%d", &basis);
    printf("Masukkan nilai pangkat : ");
    scanf("%d", &eksponen);

    if (eksponen < 0) {
        printf("\nError: Program ini hanya mendukung pangkat bulat non-negatif.\n");
    } else {
        hasil = pangkat(basis, eksponen);
        printf("\nHasil %d pangkat %d = %d\n", basis, eksponen, hasil);
    }

    getch();
    return 0;
}
