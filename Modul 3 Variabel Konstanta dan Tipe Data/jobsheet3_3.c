#include <stdio.h>

int main()
{
    const float pi = 3.14159265359f;

    float diameter = 12.0f;
    float radius   = diameter / 2.0f;
    float volume;
    float surfaceArea;

    volume      = (4.0f / 3.0f) * pi * radius * radius * radius;
    surfaceArea = 4 * pi * radius * radius;

    printf("Diketahui bola dengan diameter %.1f cm\n", diameter);
    printf("Memiliki volume   : %.4f cm^3\n", volume);
    printf("dan luas permukaan: %.4f cm^2\n", surfaceArea);

    return 0;
}
