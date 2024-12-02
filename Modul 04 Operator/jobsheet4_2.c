#include <stdio.h>

int main()
{
    char buyerName[64];
    char productName[64];
    int  singularPrice;
    int  amountBought;

    int totalPrice;

    printf("Masukkan nama pembeli: ");
    scanf(" %63[^\n]s", buyerName);

    printf("Masukkan nama produk: ");
    scanf(" %63[^\n]s", productName);

    printf("Masukkan harga satu barang: ");
    scanf(" %d", &singularPrice);

    printf("Masukkan jumlah barang dibeli: ");
    scanf(" %d", &amountBought);

    totalPrice = amountBought * singularPrice;

    printf("Total harga pembelian: Rp%d\n", totalPrice);

    return 0;
}
