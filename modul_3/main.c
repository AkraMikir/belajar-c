#include <stdio.h>

int main() {
    char nama1[50], nama2[50], nama3[50];
    int harga1, harga2, harga3;
    int qty1, qty2, qty3;
    int subtotal1, subtotal2, subtotal3, total;

    // Input Barang 1
    printf("=== Input Data Barang ===\n");
    printf("Barang 1:\n");
    printf("Nama barang : ");
    scanf(" %49[^\n]", nama1);
    printf("Harga satuan: ");
    scanf("%d", &harga1);
    printf("Jumlah (qty): ");
    scanf("%d", &qty1);

    // Input Barang 2
    printf("\nBarang 2:\n");
    printf("Nama barang : ");
    scanf(" %49[^\n]", nama2);
    printf("Harga satuan: ");
    scanf("%d", &harga2);
    printf("Jumlah (qty): ");
    scanf("%d", &qty2);

    // Input Barang 3
    printf("\nBarang 3:\n");
    printf("Nama barang : ");
    scanf(" %49[^\n]", nama3);
    printf("Harga satuan: ");
    scanf("%d", &harga3);
    printf("Jumlah (qty): ");
    scanf("%d", &qty3);

    // Perhitungan
    subtotal1 = harga1 * qty1;
    subtotal2 = harga2 * qty2;
    subtotal3 = harga3 * qty3;
    total = subtotal1 + subtotal2 + subtotal3;

    // Cetak Struk
    printf("\n==================================================\n");
    printf("                  STRUK BELANJA                   \n");
    printf("==================================================\n");
    printf("%-20s %5s %10s %12s\n", "Nama Barang", "Qty", "Harga", "Subtotal");
    printf("--------------------------------------------------\n");
    printf("%-20s %5d %10d %12d\n", nama1, qty1, harga1, subtotal1);
    printf("%-20s %5d %10d %12d\n", nama2, qty2, harga2, subtotal2);
    printf("%-20s %5d %10d %12d\n", nama3, qty3, harga3, subtotal3);
    printf("--------------------------------------------------\n");
    printf("%-37s %12d\n", "Total Bayar:", total);
    printf("==================================================\n");

    getch();
    
    return 0;
}
