#include <stdio.h>

int main()
{
    int totalBoughtRaw;
    int totalBoughtFinal;
    int discount;
    int cashback;

    printf("---=== TOSERBA ===---\n");

    printf("Masukkan total pembelian barang: Rp");
    scanf(" %d", &totalBoughtRaw);

    if (totalBoughtRaw <= 75000)
    {
        discount         = (0.05f * totalBoughtRaw);
        cashback         = 0;
        totalBoughtFinal = totalBoughtRaw - discount;
    }
    else if (totalBoughtRaw > 75000 && totalBoughtRaw <= 125000)
    {
        discount         = (0.15f * totalBoughtRaw);
        cashback         = 0;
        totalBoughtFinal = totalBoughtRaw - discount;
    }
    if (totalBoughtRaw > 125000)
    {
        discount         = (0.25f * totalBoughtRaw);
        cashback         = 5000;
        totalBoughtFinal = totalBoughtRaw - discount - cashback;
    }

    if (cashback == 0)
        printf(
            "Total pembelian barang termasuk diskon: Rp%d (diskon Rp%d)\n",
            totalBoughtFinal, discount);
    if (cashback > 0)
        printf(
            "Total pembelian barang termasuk diskon: Rp%d (diskon Rp%d dan cashback Rp%d)\n",
            totalBoughtFinal, discount, cashback);

    return 0;
}
