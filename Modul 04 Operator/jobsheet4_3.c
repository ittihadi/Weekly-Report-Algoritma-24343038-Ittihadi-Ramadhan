#include "stdio.h"

int main()
{
    float presenceScore = 85;
    float practiceScore = 65;
    float utsScore      = 80;
    float uasScore      = 75;
    float endScore;

    printf("Diketahui nilai:\n");
    printf("  Presensi : %.2f%%\n", presenceScore);
    printf("  Praktek  : %.2f%%\n", practiceScore);
    printf("  UTS      : %.2f%%\n", utsScore);
    printf("  UAS      : %.2f%%\n", uasScore);

    endScore =
        (0.1f * presenceScore) +
        (0.2f * practiceScore) +
        (0.3f * utsScore) +
        (0.4f * uasScore);

    printf("Maka nilai akhir: %.2f%%\n", endScore);

    return 0;
}
