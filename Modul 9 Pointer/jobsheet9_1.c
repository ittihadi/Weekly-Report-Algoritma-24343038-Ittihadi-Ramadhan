#include <stdio.h>
#include <string.h>

int main()
{
    char text[] = "BORLAND";

    char* mulai = strchr(text, '\0') - 1;

    while (mulai >= text)
    {
        printf("%s\n", mulai);
        mulai--;
    }

    return 0;
}
