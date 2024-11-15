#include <stdio.h>

const float pi = 3.14159f;

float luas(float jariJari)
{
    return pi * jariJari * jariJari;
}

float keliling(float jariJari)
{
    return 2 * pi * jariJari;
}

int main()
{
    float jariJariLingkaran, luasLingkaran, kelilingLingkaran;

    printf("Masukkan jari-jari dari lingkaran: ");
    scanf("%f", &jariJariLingkaran);
    getchar();

    luasLingkaran     = luas(jariJariLingkaran);
    kelilingLingkaran = keliling(jariJariLingkaran);

    printf("Luas dari lingkaran: %.2f\n", luasLingkaran);
    printf("Keliing dari lingkaran: %.2f\n", kelilingLingkaran);

    return 0;
}
