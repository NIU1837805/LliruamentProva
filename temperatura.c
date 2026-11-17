
#include <stdio.h>

int main(void) {
    int temperatura = 25;
    float Fahrenheit = temperatura * 9.0 / 5 + 32;
    printf("Temperatura: %d graus\nFahrenheit: %.1f graus\n", temperatura, Fahrenheit);
    return 0;
}

