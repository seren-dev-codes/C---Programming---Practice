#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Function Prototypes */
float celsius_to_fahrenheit(float);
float fahrenheit_to_celsius(float);
float celsius_to_kelvin(float);
float kelvin_to_celsius(float);

int main() 
{
    int choice;
    float value, result;

    while (true)
    {
        /* Displaying the User Menu */
        printf("-----   TEMPERATURE CONVERTER   -----\n");
        printf("1 - Celsius to Fahrenheit\n");
        printf("2 - Fahrenheit to Celsius\n");
        printf("3 - Celsius to Kelvin\n");
        printf("4 - Kelvin to Celsius\n");
        printf("5 - Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        /* Exit Condition */
        if (choice == 5) {
            printf("Exiting the program. Goodbye!\n");
            break; 
        }

        /* Input Validation */
        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Please try again.\n\n");
            continue; 
        }

        /* Getting the value from user once for all conversions */
        printf("Enter the temperature value: ");
        scanf("%f", &value);

        /* Processing conversions based on user choice */
        switch (choice)
        {
            case 1:
                result = celsius_to_fahrenheit(value);
                printf("%.2f Celsius = %.2f Fahrenheit\n\n", value, result);
                break;
            
            case 2:
                result = fahrenheit_to_celsius(value);
                printf("%.2f Fahrenheit = %.2f Celsius\n\n", value, result);
                break;

            case 3:
                result = celsius_to_kelvin(value);
                printf("%.2f Celsius = %.2f Kelvin\n\n", value, result);
                break;

            case 4:
                result = kelvin_to_celsius(value);
                printf("%.2f Kelvin = %.2f Celsius\n\n", value, result);
                break;
        }
    }
    
    return 0;
}

/* --- Function Definitions --- */

/* Formula: (C * 9/5) + 32 */
float celsius_to_fahrenheit(float celsius) 
{
    return (celsius * 9.0 / 5.0) + 32.0;
}

/* Formula: (F - 32) * 5/9 */
float fahrenheit_to_celsius(float fahrenheit)
{
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

/* Formula: C + 273.15 */
float celsius_to_kelvin(float celsius)
{
    return celsius + 273.15;
}

/* Formula: K - 273.15 */
float kelvin_to_celsius(float kelvin)
{
    return kelvin - 273.15;
}
