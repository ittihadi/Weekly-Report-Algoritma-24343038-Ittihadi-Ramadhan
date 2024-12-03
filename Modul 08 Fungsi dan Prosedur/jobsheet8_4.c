#include <stdio.h>

int potong(int hargaMasuk)
{
    if (hargaMasuk < 1000000)
        return 0;
    else if (hargaMasuk < 3000000)
        return (int)(.2f * hargaMasuk);
    else
        return (int)(.35f * hargaMasuk);
}

int main()
{
    int hargaBayar, potongan, hargaAkhir;
    printf("Total Pembelian (Rp)     : ");
    scanf("%d", &hargaBayar);
    getchar();

    potongan   = potong(hargaBayar);
    hargaAkhir = hargaBayar - potongan;

    printf("Besar Diskon             : Rp %d\n", potongan);
    printf("Besar Yang Harus Dibayar : Rp %d\n", hargaAkhir);

    return 0;
}
