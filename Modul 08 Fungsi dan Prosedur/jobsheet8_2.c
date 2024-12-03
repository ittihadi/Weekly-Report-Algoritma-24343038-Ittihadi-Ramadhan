#include <stdio.h>
#include <string.h>

float jumlah(float a, float b) { return a + b; }
float kurang(float a, float b) { return a - b; }
float kali(float a, float b) { return a * b; }
float bagi(float a, float b) { return a / b; }

int main()
{
    char  operasi;
    float a, b, hasil;

    printf("Masukkan operasi (+, -, *, /): ");
    scanf("%c", &operasi);
    getchar();

    if (strchr("+-*/", operasi) == NULL)
    {
        printf("Maaf, operasi %c tidak valid\n", operasi);
        return 1;
    }

    printf("Silahkan masukkan dua nilai a dan b: ");
    scanf("%f", &a);
    getchar();
    scanf("%f", &b);
    getchar();

    switch (operasi)
    {
        case '+':
            hasil = jumlah(a, b);
            break;
        case '-':
            hasil = kurang(a, b);
            break;
        case '*':
            hasil = kali(a, b);
            break;
        case '/':
            hasil = bagi(a, b);
            break;
    }

    printf("Hasil dari %.2f %c %.2f = %.2f\n", a, operasi, b, hasil);

    return 0;
}
