#include "stdio.h"

int main()
{
    float inputRupiah;
    float outputDollar;

    float conversionRate = 1.0f / 14250.0f;

    printf("Masukkan jumlah uang dalam rupiah (Rp): ");
    scanf(" %f", &inputRupiah);

    outputDollar = inputRupiah * conversionRate;

    printf("Uang anda dalam dollar ($) adalah: $%.2f\n", outputDollar);

    return 0;
}
