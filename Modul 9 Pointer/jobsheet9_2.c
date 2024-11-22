#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[64];

    printf("Masukkan sebuah string: ");
    scanf("%63[^\n]s", buffer);
    getchar();

    for (char* mulai = strchr(buffer, '\0') - 1; mulai >= buffer; mulai--)
        putchar(*mulai);

    putchar('\n');

    return 0;
}
