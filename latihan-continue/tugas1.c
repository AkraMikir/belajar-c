#include <stdio.h>
#include <conio.h>

int main() {
    int i;

    for (i = 0; i <= 100; i++) {
        // Angka 0 dicetak langsung agar tidak memicu kondisi berhenti di awal
        if (i == 0) {
            printf("%d\n", i);
            continue;
        }

        // Berhenti print jika angka habis dibagi 3 dan 5 (kelipatan 15)
        if (i % 3 == 0 && i % 5 == 0) {
            break;
        }

        // Jika habis dibagi 3, cetak ccit
        if (i % 3 == 0) {
            printf("ccit\n");
            continue;
        }

        // Jika habis dibagi 5, cetak fsd
        if (i % 5 == 0) {
            printf("fsd\n");
            continue;
        }

        // Jika tidak habis dibagi 3 atau 5, cetak angka
        printf("%d\n", i);
    }

    getch();
    return 0;
}
