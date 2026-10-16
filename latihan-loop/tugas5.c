#include <stdio.h>
#include <conio.h>

int main() {
    int i;
    int total = 0;

    for (i = 1; i <= 9; i += 2) {
        total += i;
        printf("%d", i);
        if (i < 9) {
            printf(" + ");
        }
    }
    printf(" = %d\n", total);

    getch();
    return 0;
}
