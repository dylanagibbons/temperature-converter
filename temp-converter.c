#include <stdio.h>
#include <ncurses.h>

void print_conversion_prompt(const char* unit);
float fahrenheit_to_celsius(float fahr);
float celsius_to_fahrenheit(float cel);

void print_conversion_prompt(const char* unit) {
    printw("Please input your %s value: ", unit);
}

float celsius_to_fahrenheit(float celsius) {
    float fahr = (celsius * 9.0) / 5.0 + 32;

    return fahr;
}

float fahrenheit_to_celsius(float fahr) {
    float celsius = (5.0/9.0) * (fahr - 32);

    return celsius;
}

int main(void) {
    initscr();

    int lower = 0, upper = 300, step  = 20;
    float celsius = 0, fahr = 0;
    int interactive = 1, choice = 0;
    float conversion = 0;

    printw("Welcome to Temperature Converter!\n");
    while(interactive) {
        printw("What would you like to do?\n");
        printw("0: Exit\n");
        printw("1: Convert Fahrenheit to Celsisus\n");
        printw("2: Convert Celsius to Fahrenheit\n");

        scanw("%d", &choice);
        if(choice == 0) {
            printw("\nGoodbye\n\n");
            break;
        } else if (choice == 1) {
            printw("\nYou have selected fahrenheit to celsius\n");
            print_conversion_prompt("fahrenheit");
            scanw("%f", &fahr);
            conversion = fahrenheit_to_celsius(fahr);
            printw("%0.0f in fahrenheit is %0.2f in celsius", fahr, conversion);
        } else if (choice == 2) {
            printw("\nYou have selected celsius to fahrenheit\n\n");
            printw("Please input your celsius value: ");
            print_conversion_prompt("celsius");
            scanw("%f", &celsius);
            conversion = celsius_to_fahrenheit(celsius);
            printw("%0.2f in celsius is %0.0f in fahrenheit", celsius, fahr);
        } else {
            printw("\nPlease make a valid selection\n\n");
        }
    }
    
    endwin();
    return 0;
}
