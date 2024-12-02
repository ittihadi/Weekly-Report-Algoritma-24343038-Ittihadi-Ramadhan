#include <stdio.h>

int main()
{
    float celciusIn;
    float kelvinOut;
    float reamurOut;
    float fahrenheitOut;

    printf("Input Suhu (Celcius)  = ");
    scanf(" %f", &celciusIn);

    kelvinOut     = celciusIn + 273.15f;
    fahrenheitOut = (celciusIn * 1.8f) + 32.0f;
    reamurOut     = celciusIn * 0.8f;

    printf("Suhu dalam Kelvin     = %.2f\n", kelvinOut);
    printf("Suhu dalam Fahrenheit = %.2f\n", fahrenheitOut);
    printf("Suhu dalam Reamur     = %.2f\n", reamurOut);

    return 0;
}
