#include <stdio.h>

int main()
{
    float nilaiSiswa[20];
    float rataRata = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Masukkan nilai mahasiswa ke-%d: ", i + 1);
        scanf("%f", &nilaiSiswa[i]);
        getchar();
    }

    for (int j = 0; j < 20; j++)
        rataRata += nilaiSiswa[j];

    rataRata /= 20.0;

    printf("Nilai rata-rata dari semua siswa: %.2f\n", rataRata);

    return 0;
}
