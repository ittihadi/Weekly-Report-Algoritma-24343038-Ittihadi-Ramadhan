#include <stdio.h>

int main()
{
    char  choice;
    float firstOp;
    float secondOp;
    float result;

    printf("Masukkan operasi aritmatika:\n");
    printf("[+] Penjumlahan\n");
    printf("[-] Pengurangan\n");
    printf("[x] Perkalian\n");
    printf("[/] Pembagian\n");
    printf("[%%] Sisa Bagi (Modulo)\n");

    scanf(" %c", &choice);

    if (choice != '+' && choice != '-' &&
        choice != 'x' && choice != '/' &&
        choice != '%')
    {
        printf("Operasi tidak valid: %c\n", choice);
        return 0;
    }

    if (choice == '%')
        printf("Masukkan angka bulat pertama: ");
    else
        printf("Masukkan angka pertama: ");

    scanf(" %f", &firstOp);

    if (choice == '%')
        printf("Masukkan angka bulat kedua: ");
    else
        printf("Masukkan angka kedua: ");

    scanf(" %f", &secondOp);

    switch (choice)
    {
        case '+':
            result = firstOp + secondOp;
            break;
        case '-':
            result = firstOp - secondOp;
            break;
        case 'x':
            result = firstOp * secondOp;
            break;
        case '/':
            result = firstOp / secondOp;
            break;
        case '%':
            result = (int)firstOp % (int)secondOp;
            break;
        default:
            break;
    }

    if (choice == '%')
        printf("Hasil sisa bagi = %d\n", (int)result);
    else
        printf("Hasil kalkulasi = %.2f\n", result);

    return 0;
}
