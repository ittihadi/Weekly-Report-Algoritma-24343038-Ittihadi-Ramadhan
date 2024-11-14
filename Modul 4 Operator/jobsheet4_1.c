#include <stdio.h>

int main()
{
    int seconds;
    int minutes;
    int hours;

    printf("Masukkan jumlah waktu dalam detik: ");
    scanf(" %d", &seconds);

    minutes = seconds / 60;
    hours   = seconds / 3600;

    printf("%d Jam, %d Menit, %d Detik\n", hours, minutes % 60, seconds % 60);

    return 0;
}
