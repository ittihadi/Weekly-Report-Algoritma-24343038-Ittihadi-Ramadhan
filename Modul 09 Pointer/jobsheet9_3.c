#include <stdio.h>

int main()
{
    printf("Kasus A\n");
    int lesleyA  = 57082;
    int laylaA   = lesleyA;
    int balmondA = laylaA + 1;

    printf("Nilai Lesley : %d\n", lesleyA);
    printf("Nilai Layla  : %d\n", laylaA);
    printf("Nilai Belmond: %d\n", balmondA);

    printf("Kasus B\n");
    int  lesleyB  = 57082;
    int *laylaB   = &lesleyB;
    int  balmondB = *laylaB + 1;

    printf("Nilai Lesley : %d\n", lesleyB);
    printf("Nilai Layla  : %p\n", laylaB);
    printf("Nilai Belmond: %d\n", balmondB);

    return 0;
}
