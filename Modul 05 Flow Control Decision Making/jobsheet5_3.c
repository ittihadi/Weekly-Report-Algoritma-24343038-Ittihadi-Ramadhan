#include <stdio.h>

int main()
{
    const float pi = 3.14159265359f;

    int   choice;
    float radius;
    float length;
    float width;
    float height;
    float area;

    printf("Pilihan\n");
    printf("[1] Luas Permukaan Bola\n");
    printf("[2] Luas Permukaan Kubus\n");
    printf("[3] Luas Permukaan Balok\n");
    printf("[4] Luas Permukaan Tabung\n");
    printf("Silahkan masukkan pilihan: ");
    scanf(" %d", &choice);

    switch (choice)
    {
        case 1:     // Bola (radius)
            printf("Silahkan masukkan radius bola: ");
            scanf(" %f", &radius);

            area = 4 * pi * radius * radius;
            printf("Luas permukaan bola adalah %.2f\n", area);
            break;
        case 2:     // Kubus (length)
            printf("Silahkan masukkan panjang kubus: ");
            scanf(" %f", &length);

            area = 6 * length * length;
            printf("Luas permukaan kubus adalah %.2f\n", area);
            break;
        case 3:     // Balok (length, width, height)
            printf("Silahkan masukkan panjang balok: ");
            scanf(" %f", &length);
            printf("Silahkan masukkan lebar balok: ");
            scanf(" %f", &width);
            printf("Silahkan masukkan tinggi balok: ");
            scanf(" %f", &height);

            area = 2 * length * width +
                   2 * length * height +
                   2 * width * height;
            printf("Luas permukaan balok adalah %.2f\n", area);
            break;
        case 4:     // Tabung (height, radius)
            printf("silahkan masukkan radius tabung: ");
            scanf(" %f", &radius);
            printf("Silahkan masukkan tinggi tabung: ");
            scanf(" %f", &height);

            area = 2 * pi * radius * radius +
                   2 * pi * radius * height;
            printf("Luas permukaan tabung adalah %.2f\n", area);
            break;
        default:
            break;
    }

    return 0;
}
