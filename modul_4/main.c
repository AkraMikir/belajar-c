#include <stdio.h>

int main() {
    float tugas, uts, uas;
    float nilai_akhir;

    printf("=== Kalkulator Nilai Akhir ===\n");
    printf("Masukkan nilai Tugas: ");
    scanf("%f", &tugas);
    printf("Masukkan nilai UTS  : ");
    scanf("%f", &uts);
    printf("Masukkan nilai UAS  : ");
    scanf("%f", &uas);

    // Hitung bobot: 30% tugas, 30% uts, 40% uas
    nilai_akhir = (0.30f * tugas) + (0.30f * uts) + (0.40f * uas);

    printf("\n------------------------------\n");
    printf("Nilai Akhir : %.2f\n", nilai_akhir);

    // Status lulus (>= 60) menggunakan ekspresi logika dan operator ternary
    printf("Status      : %s\n", (nilai_akhir >= 60.0f) ? "LULUS" : "TIDAK LULUS");
    printf("------------------------------\n");

    getch();
    return 0;
}
