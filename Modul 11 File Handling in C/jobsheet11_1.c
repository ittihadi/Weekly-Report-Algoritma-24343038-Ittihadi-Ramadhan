#include <stdio.h>

int main()
{
    FILE *fileOutput = fopen("datamahasiswa.txt", "a+");

    char bufferNama[64];
    char bufferNim[16];
    char bufferJurusan[128];
    char bufferProdi[128];

    int  counter = 1;
    char ulangi;

    while (1)
    {
        printf("Masukkan data mahasiswa ke-%d\n", counter);
        printf("Nama          : ");
        scanf("%63[^\n]s", bufferNama);
        getchar();
        printf("NIM           : ");
        scanf("%15[^\n]s", bufferNim);
        getchar();
        printf("Jurusan       : ");
        scanf("%127[^\n]s", bufferJurusan);
        getchar();
        printf("Program Studi : ");
        scanf("%127[^\n]s", bufferProdi);
        getchar();

        fprintf(fileOutput, "%s, %s, %s, %s\n", bufferNama, bufferNim, bufferJurusan, bufferProdi);

        printf("Masukkan lagi? (Y/t) ");
        ulangi = getchar();

        if (ulangi != '\n')
            getchar();

        if (ulangi == 't' || ulangi == 'T')
            break;

        counter++;
    }

    fclose(fileOutput);

    return 0;
}
