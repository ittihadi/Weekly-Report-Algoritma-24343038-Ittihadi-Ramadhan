#include <stdio.h>

int main()
{
    const int   firstHourRate     = 15000;
    const float nextHoursRateMult = 0.5f;

    int rentDuration;
    int rentAmount;

    printf("-- Rental film --\n");
    printf("Tarif:\n");
    printf("  1 Jam pertama : Rp15.000\n");
    printf("  Jam berikutnya: 50%% tarif jam pertama\n");
    printf("\n");
    printf("Masukkan berapa lama Anda ingin rental: ");
    scanf(" %d", &rentDuration);

    rentAmount = ((rentDuration - 1) * firstHourRate * nextHoursRateMult) +
                 (firstHourRate);

    printf("\n");
    printf("Tarif anda untuk rental selama %d jam adalah Rp%d\n",
           rentDuration, rentAmount);

    return 0;
}
