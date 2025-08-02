#include <stdio.h>
#include <math.h>

// Function declarations for basic and scientific operations
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
float squareRoot(float num);
float power(float base, float exponent);
float sine(float angle);
float cosine(float angle);
float tangent(float angle);
float logarithm(float num);

int main() {
    int choice;
    float num1, num2, result;
    float angle;

    // Print the calculator menu
    printf("--------------------------------------------------\n");
    printf("Welcome to the Scientific Calculator\n");
    printf("--------------------------------------------------\n");
    printf("Choose an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Square Root\n");
    printf("6. Power\n");
    printf("7. Sine (in degrees)\n");
    printf("8. Cosine (in degrees)\n");
    printf("9. Tangent (in degrees)\n");
    printf("10. Logarithm (base 10)\n");
    printf("11. Exit\n");
    printf("--------------------------------------------------\n");
    
    while (1) {
        printf("Enter your choice (1-11): ");
        scanf("%d", &choice);

        // If user chooses to exit
        if (choice == 11) {
            printf("Exiting Calculator. Thank you for using it!\n");
            break;
        }

        // Get the required input based on the choice
        if (choice >= 1 && choice <= 4 || choice == 6) {
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);
        } else if (choice == 5 || choice == 10) {
            printf("Enter number: ");
            scanf("%f", &num1);
        } else if (choice == 7 || choice == 8 || choice == 9) {
            printf("Enter angle in degrees: ");
            scanf("%f", &angle);
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error! Division by zero is not allowed.\n");
                } else {
                    result = divide(num1, num2);
                    printf("Result: %.2f\n", result);
                }
                break;
            case 5:
                if (num1 < 0) {
                    printf("Error! Square root of a negative number is not possible.\n");
                } else {
                    result = squareRoot(num1);
                    printf("Result: %.2f\n", result);
                }
                break;
            case 6:
                result = power(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 7:
                result = sine(angle);
                printf("Result: %.2f\n", result);
                break;
            case 8:
                result = cosine(angle);
                printf("Result: %.2f\n", result);
                break;
            case 9:
                result = tangent(angle);
                printf("Result: %.2f\n", result);
                break;
            case 10:
                if (num1 <= 0) {
                    printf("Error! Logarithm of non-positive numbers is undefined.\n");
                } else {
                    result = logarithm(num1);
                    printf("Result: %.2f\n", result);
                }
                break;
            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }

        // Ask if the user wants to perform another operation
        printf("--------------------------------------------------\n");
        printf("Do you want to perform another operation? (y/n): ");
        char continue_choice;
        getchar(); // to consume newline left by previous input
        scanf("%c", &continue_choice);
        
        if (continue_choice == 'n' || continue_choice == 'N') {
            printf("Exiting Calculator. Thank you for using it!\n");
            break;
        }

        printf("--------------------------------------------------\n");
    }

    return 0;
}

// Functions to perform the operations
float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    return num1 / num2;
}

float squareRoot(float num) {
    return sqrt(num);
}

float power(float base, float exponent) {
    return pow(base, exponent);
}

float sine(float angle) {
    return sin(angle * M_PI / 180.0);  // Convert angle from degrees to radians
}

float cosine(float angle) {
    return cos(angle * M_PI / 180.0);  // Convert angle from degrees to radians
}

float tangent(float angle) {
    return tan(angle * M_PI / 180.0);  // Convert angle from degrees to radians
}

float logarithm(float num) {
    return log10(num);  // Logarithm base 10
}