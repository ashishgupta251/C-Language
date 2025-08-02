#include <stdio.h>

void lengthConversion(float meters) {
    printf("Length Conversion:\n");
    printf("%.2f meters = %.2f kilometers\n", meters, meters / 1000);
    printf("%.2f meters = %.2f centimeters\n", meters, meters * 100);
    printf("%.2f meters = %.2f millimeters\n", meters, meters * 1000);
}

void temperatureConversion(float celsius) {
    printf("Temperature Conversion:\n");
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, (celsius * 9/5) + 32);
    printf("%.2f Celsius = %.2f Kelvin\n", celsius, celsius + 273.15);
}

void weightConversion(float kilograms) {
    printf("Weight Conversion:\n");
    printf("%.2f kilograms = %.2f grams\n", kilograms, kilograms * 1000);
    printf("%.2f kilograms = %.2f pounds\n", kilograms, kilograms * 2.20462);
}

int main() {
    int choice;
    float value;

    printf("Unit Conversion Program\n");
    printf("1. Length Conversion (meters)\n");
    printf("2. Temperature Conversion (Celsius)\n");
    printf("3. Weight Conversion (kilograms)\n");
    printf("Choose an option (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter length in meters: ");
            scanf("%f", &value);
            lengthConversion(value);
            break;
        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &value);
            temperatureConversion(value);
            break;
        case 3:
            printf("Enter weight in kilograms: ");
            scanf("%f", &value);
            weightConversion(value);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}