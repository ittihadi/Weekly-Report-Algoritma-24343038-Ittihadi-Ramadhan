#include <stdio.h>

int main()
{
    int  jumlahNama = 0;
    char namaNama[100][40];

    printf("Input banyak siswa: ");
    scanf("%d", &jumlahNama);
    getchar();

    if (jumlahNama > 100)
    {
        printf("Maaf, itu terlalu banyak nama\n");
        return 1;
    }

    for (int i = 0; i < jumlahNama; i++)
    {
        printf("Input nama mahasiswa %d: ", i + 1);
        scanf("%39[^\n]s", namaNama[i]);
        getchar();
    }

    printf("\n");
    for (int i = 0; i < jumlahNama; i++)
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, namaNama[i]);

    return 0;
}
