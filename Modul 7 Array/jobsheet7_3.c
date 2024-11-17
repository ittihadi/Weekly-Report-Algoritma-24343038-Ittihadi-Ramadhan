#include <stdio.h>
#include <string.h>

int main()
{
    char kunci[] = "waah keren banget";
    char input[32];

    printf("Silahkan masukkan username: ");
    scanf("%31[^\n]s", input);
    getchar();

    if (strcmp(input, "admin") != 0)
    {
        printf("Pengguna %s tidak terdaftar\n", input);
        return 0;
    }

    printf("Silahkan masukkan password: ");
    scanf("%31[^\n]s", input);
    getchar();

    if (strcmp(kunci, input) == 0)
        printf("Berhasil login\n");
    else
        printf("Password salah\n");

    return 0;
}
