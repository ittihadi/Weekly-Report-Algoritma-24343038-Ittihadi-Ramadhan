#include "stdio.h"

int main()
{
    float length = 10;
    float width  = 5;
    float area;

    printf("Diketahui persegi panjang dengan\n");
    printf("  Panjang : %.1f cm\n", length);
    printf("  Lebar   : %.1f cm\n", width);

    area = width * length;
    printf("Memiliki area: %.1f cm^2\n", area);

    return 0;
}
