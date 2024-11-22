#include <stdio.h>
#include <string.h>

struct DataMahasiswa
{
    char npm[16];
    char nama[64];
    char tglLahir[11];
    char alamat[64];
    char hp[16];
};

int main()
{
    struct DataMahasiswa dataMahasiswa[50];
    int                  jumlahData = 0;

    int panjangNamaTerpanjang   = 0;
    int panjangAlamatTerpanjang = 0;
    int pilihan;

    for (int i = 0; i < 50; ++i)
    {
        printf("NPM       : ");
        scanf("%15[^\n]s", dataMahasiswa[i].npm);
        getchar();
        printf("NAMA      : ");
        scanf("%63[^\n]s", dataMahasiswa[i].nama);
        getchar();
        printf("TGL LAHIR : ");
        scanf("%10[^\n]s", dataMahasiswa[i].tglLahir);
        getchar();
        printf("ALAMAT    : ");
        scanf("%63[^\n]s", dataMahasiswa[i].alamat);
        getchar();
        printf("HP        : ");
        scanf("%15[^\n]s", dataMahasiswa[i].hp);
        getchar();

        jumlahData++;
        if (panjangNamaTerpanjang < strlen(dataMahasiswa[i].nama))
            panjangNamaTerpanjang = strlen(dataMahasiswa[i].nama);

        if (panjangAlamatTerpanjang < strlen(dataMahasiswa[i].alamat))
            panjangAlamatTerpanjang = strlen(dataMahasiswa[i].alamat);

        printf("Mau memasukkan data lagi [Y/t]? ");
        pilihan = getchar();
        if (pilihan != '\n' && pilihan != EOF) getchar();

        if (pilihan == 't' || pilihan == 'T')
            break;
    }

    for (int i = 0; i < jumlahData; i++)
    {
        printf("%-16s %-*s %-10s %-*s %s\n",
               dataMahasiswa[i].npm,
               panjangNamaTerpanjang, dataMahasiswa[i].nama,
               dataMahasiswa[i].tglLahir,
               panjangAlamatTerpanjang, dataMahasiswa[i].alamat,
               dataMahasiswa[i].hp);
    }

    return 0;
}
