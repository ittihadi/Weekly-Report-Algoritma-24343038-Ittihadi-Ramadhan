#include "stdio.h"

int main()
{
    float baseWidth = 8;
    float height    = 5;
    float area;

    printf("Diketahui segitiga dengan\n");
    printf("  Panjang Alas : %.1f cm\n", baseWidth);
    printf("  Tinggi       : %.1f cm\n", height);

    area = baseWidth * height / 2;
    printf("Memiliki area  : %.1f cm^2\n", area);

    return 0;
}
