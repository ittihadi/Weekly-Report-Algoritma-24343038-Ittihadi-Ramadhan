#include <stdio.h>

float kaliRekursif(float nilai, float pengali)
{
    if (pengali == 1)
        return nilai;

    return nilai + kaliRekursif(nilai, pengali - 1);
}

int main()
{
    float a, b, hasil;

    printf("Silahkan masukkan dua angka untuk dikalikan\n");
    scanf("%f", &a);
    getchar();
    scanf("%f", &b);
    getchar();

    hasil = kaliRekursif(a, b);

    printf("Hasil kali %.2f x %.2f = %.2f\n", a, b, hasil);

    return 0;
}
