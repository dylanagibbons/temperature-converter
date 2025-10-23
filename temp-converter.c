#include <stdio.h>

void print_conversion_prompt(const char* unit);
float fahrenheit_to_celsius(float fahr);
float celsius_to_fahrenheit(float cel);

int main(void) {
    int lower = 0, upper = 300, step  = 20;
    float celsius = 0, fahr = 0;
    int interactive = 1, choice = 0;
    float conversion = 0;

    printf("Welcome to Temperature Converter!\n");
    while(interactive) {
        printf("What would you like to do?\n");
        printf("0: Exit\n");
        printf("1: Convert Fahrenheit to Celsisus\n");
        printf("2: Convert Celsius to Fahrenheit\n");

        scanf("%d", &choice);
        if(choice == 0) {
            printf("\nGoodbye\n\n");
            break;
        } else if (choice == 1) {
            printf("\nYou have selected fahrenheit to celsius\n");
            print_conversion_prompt("fahrenheit");
            scanf("%f", &fahr);
            conversion = fahrenheit_to_celsius(fahr);
        } else if (choice == 2) {
            printf("\nYou have selected celsius to fahrenheit\n\n");
            printf("Please input your celsius value: ");
            print_conversion_prompt("celsius");
            scanf("%f", &celsius);
            conversion = celsius_to_fahrenheit(celsius);
        } else {
            printf("\nPlease make a valid selection\n\n");
        }
    }
    
    return 0;
}

void print_conversion_prompt(const char* unit) {
    printf("Please input your %s value: ", unit);
}

float celsius_to_fahrenheit(float celsius) {
    float fahr = (celsius * 9.0) / 5.0 + 32;

    return fahr;
}

float fahrenheit_to_celsius(float fahr) {
    float celsius = (5.0/9.0) * (fahr - 32);

    return celsius;
}
