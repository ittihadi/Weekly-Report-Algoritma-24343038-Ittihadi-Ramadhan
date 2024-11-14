#include <stdio.h>

int main()
{
    char fullName[64];

    printf("Hello, siapa nama lengkapmu?\n");
    scanf("%63[^\n]s", fullName);

    printf("Selamat Datang %s dalam Pemrograman C!\n", fullName);

    return 0;
}
