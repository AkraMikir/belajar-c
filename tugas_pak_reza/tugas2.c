#include <stdio.h>
#include <conio.h>

int main() {
    // TUGAS 1: KONVERSI SUHU (DASAR)
    printf("========================================================\n");
    printf("               TUGAS 1: KONVERSI SUHU                   \n");
    printf("========================================================\n");

    // Menggunakan tipe double untuk bilangan desimal yang butuh presisi
    double celsius = 100.0; // Contoh nilai suhu awal
    // Menggunakan 9.0 / 5.0 agar tidak terjadi pembagian integer bulat
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    double kelvin = celsius + 273.15;

    printf("Suhu Celsius    : %.2f C\n", celsius);
    printf("Ke Fahrenheit   : %.2f F\n", fahrenheit);
    printf("Ke Kelvin       : %.2f K\n\n", kelvin);

    // TUGAS 2: UKURAN TIPE DATA (MENENGAH)
    printf("========================================================\n");
    printf("             TUGAS 2: UKURAN TIPE DATA                  \n");
    printf("========================================================\n");
    printf("Ukuran memori untuk tiap tipe data:\n");
    printf("- Ukuran char   : %zu byte\n", sizeof(char));
    printf("- Ukuran short  : %zu byte\n", sizeof(short));
    printf("- Ukuran int    : %zu byte\n", sizeof(int));
    printf("- Ukuran long   : %zu byte\n", sizeof(long));
    printf("- Ukuran float  : %zu byte\n", sizeof(float));
    printf("- Ukuran double : %zu byte\n\n", sizeof(double));

    // TUGAS 3: JEBAKAN INTEGER (TANTANGAN)
    printf("========================================================\n");
    printf("              TUGAS 3: JEBAKAN INTEGER                  \n");
    printf("========================================================\n");

    int a = 5;
    int b = 2;

    // 1. Tanpa casting (Jebakan Integer)
    int hasilInteger = a / b;
    printf("Operasi tanpa casting (5 / 2)        : %d\n", hasilInteger);

    // 2. Perbaikan dengan Type Casting ke double/float
    double hasilCasting = (double)a / b;
    printf("Perbaikan dengan casting ((double)5 / 2): %.2f\n\n", hasilCasting);

    // Penjelasan Alasan
    printf("PENJELASAN ALASAN:\n");
    printf("1. Mengapa 5 / 2 menghasilkan 2?\n");
    printf("   Karena angka 5 dan 2 adalah integer (bilangan bulat). Dalam bahasa C,\n");
    printf("   pembagian antar integer (integer division) akan selalu menghasilkan\n");
    printf("   integer juga, sehingga sisa/angka di belakang koma langsung dibuang (dibulatkan ke bawah).\n\n");

    printf("2. Mengapa type casting menghasilkan 2.50?\n");
    printf("   Dengan menambahkan `(double)5`, nilai 5 diubah menjadi bilangan pecahan.\n");
    printf("   Dalam aturan C, jika salah satu operan bertipe desimal/floating-point,\n");
    printf("   maka operan lainnya akan otomatis dinaikkan tipenya (implicit conversion),\n");
    printf("   sehingga pembagian dilakukan secara pecahan dan menghasilkan 2.50.\n");
    printf("========================================================\n");

    getch();
    return 0;
}
