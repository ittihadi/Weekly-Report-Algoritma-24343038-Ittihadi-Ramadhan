#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int asli;
    int percobaan;
    int tebakan;
    int pilihan;

    printf("Selamat datang di permainan tebak angka!\n");
    printf("Saya akan memilih sebuah angka antara 1-20 dan Anda harus menebaknya\n");

    while (1)
    {
        asli      = rand() % 20 + 1;
        percobaan = 0;
        tebakan   = 0;

        while (tebakan != asli)
        {
            printf("\n");
            printf("Tebakan Anda: ");
            scanf("%d", &tebakan);
            getchar();

            if (tebakan < asli)
                printf("Nomor saya lebih besar!\n");
            else if (tebakan > asli)
                printf("Nomor saya lebih kecil!\n");

            percobaan++;
        }

        printf("Selamat anda benar!\n");
        printf("Anda memerlukan %d percobaan\n", percobaan);

        printf("Apakah anda ingin main lagi (y/T)? ");
        pilihan = getchar();

        if (pilihan != '\n' && pilihan != EOF) getchar();

        if (pilihan != 'y' && pilihan != 'Y')
            break;
    }

    return 0;
}
