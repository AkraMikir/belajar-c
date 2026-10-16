#include <stdio.h>

int main(void) {
    char jenis;
    int tarif;
    int lama_parkir;
    int total;

    printf("masukan jenis kendaraan (M=motor, O=mobil, T=truk) : ");
    scanf("%c",&jenis);

    switch (jenis) {
        case 'M' :
            tarif = 2000;
            break;
        case 'O' :
            tarif = 5000;
            break;
        case 'T' :
            tarif = 10000;
            break;
        default:
            printf("yang parkir disini motor, mobil, sama truk doang :\n");
            break;
    }
    printf("masukan lama parkir (jam) : ");
    scanf("%d",&lama_parkir);

    total = tarif * lama_parkir;
    printf("total tarif : %d\n", total);

    getch();
    return 0;
}