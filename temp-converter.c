#include <stdio.h>

/*print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300*/

float celsius_to_fahrenheit(float cel);
float fahrenheit_to_celsius(float fahr);

int main(void) {
    int lower = 0, upper = 300, step  = 20;

    float cel  = 27.8;
    float fahr = celsius_to_fahrenheit(cel);

    printf("Celsius: %7.1f\n", cel);
    printf("Fahrenheit: %0.0f\n", fahr);

    return 0;
}

float celsius_to_fahrenheit(float cel) {
    float fahr = (cel * 9.0) / 5.0 + 32;

    return fahr;
}

float fahrenheit_to_celsius(float fahr) {
    float cel = (5.0/9.0) * (fahr - 32);

    return cel;
}
