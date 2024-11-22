#include <stdio.h>

struct Zodiak
{
    int  bulanMulai;
    int  hariMulai;
    int  bulanAkhir;
    int  hariAkhir;
    char nama[16];
};

int main()
{
    int           tgl, bulan, tahun, i;
    struct Zodiak dataZodiak[] = {
        {.bulanMulai = 3, .hariMulai = 21, .bulanAkhir = 4, .hariAkhir = 19, .nama = "ARIES"},
        {.bulanMulai = 4, .hariMulai = 20, .bulanAkhir = 5, .hariAkhir = 20, .nama = "TAURUS"},
        {.bulanMulai = 5, .hariMulai = 21, .bulanAkhir = 6, .hariAkhir = 20, .nama = "GEMINI"},
        {.bulanMulai = 6, .hariMulai = 21, .bulanAkhir = 7, .hariAkhir = 22, .nama = "CANCER"},
        {.bulanMulai = 7, .hariMulai = 23, .bulanAkhir = 8, .hariAkhir = 22, .nama = "LEO"},
        {.bulanMulai = 8, .hariMulai = 23, .bulanAkhir = 9, .hariAkhir = 22, .nama = "VIRGO"},
        {.bulanMulai = 9, .hariMulai = 23, .bulanAkhir = 10, .hariAkhir = 22, .nama = "LIBRA"},
        {.bulanMulai = 10, .hariMulai = 23, .bulanAkhir = 11, .hariAkhir = 21, .nama = "SCORPIO"},
        {.bulanMulai = 11, .hariMulai = 22, .bulanAkhir = 12, .hariAkhir = 21, .nama = "SAGITTARIUS"},
        {.bulanMulai = 12, .hariMulai = 22, .bulanAkhir = 1, .hariAkhir = 19, .nama = "CAPRICORN"},
        {.bulanMulai = 1, .hariMulai = 20, .bulanAkhir = 2, .hariAkhir = 18, .nama = "AQUARIUS"},
        {.bulanMulai = 2, .hariMulai = 19, .bulanAkhir = 3, .hariAkhir = 20, .nama = "PISCES"},
    };

    printf("\n");
    printf("Tanggal Lahir Anda [tgl-bln-tahun]: ");
    scanf("%d-%d-%d", &tgl, &bulan, &tahun);
    getchar();

    for (i = 0; i < 12; i++)
    {
        if ((dataZodiak[i].bulanMulai == bulan && dataZodiak[i].hariMulai <= tgl) ||
            (dataZodiak[i].bulanAkhir == bulan && dataZodiak[i].hariAkhir >= tgl))
            break;
    }

    printf("Zodiak Anda adalah                : %s", dataZodiak[i].nama);

    return 0;
}
