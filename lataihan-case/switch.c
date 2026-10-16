#include <stdio.h>

int main(void) {
    char vokal;

    printf("Masukkan sebuah huruf: ");
    scanf(" %c", &vokal);

    switch (vokal) {
        case 'a':
        case 'i':
        case 'u':
        case 'e':
        case 'o':
            printf("vokal\n");
            break;
        default:
            printf("konsonan\n");
            break;
    }
    getch();
    return 0;
}
