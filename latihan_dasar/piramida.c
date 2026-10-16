#include <stdio.h>
#include <conio.h>

int main() {
    int tinggi = 6;
    int i, j;

    printf("=== Program Piramida Bintang ===\n\n");

    for (i = 1; i <= tinggi; i++) {
        for (j = 1; j <= tinggi - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }   
        printf("\n");
    }
    
    getch();

    return 0;
}
