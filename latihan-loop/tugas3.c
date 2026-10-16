#include <stdio.h>
#include <conio.h>

int main() {
    int i;
    int total = 0;

    for (i = 1; i <= 5; i++) {
        total += i;
        printf("%d", i);
        if (i < 5) {
            printf(" + ");
        }
    }
    printf(" = %d\n", total);

    getch();
    return 0;
}
