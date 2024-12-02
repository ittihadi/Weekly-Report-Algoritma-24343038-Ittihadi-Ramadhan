#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int result = i;
        for (int j = 0; j < i; j++)
        {
            printf("%d ", result);
            result += i;
        }
        printf("\n");
    }

    return 0;
}
