#include <stdio.h>
#include <conio.h>

int main() {
    int i;

    for (i = 100; i >= 0; i -= 2) {
        if (i == 0) {
            printf("%d\n", i);
        } else {
            printf("%d, ", i);
        }
    }

    getch();
    return 0;
}
