#include <stdio.h>

int main() {
    int choice;
    float temp, result;

    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        result = (temp - 32.0) * 5.0 / 9.0;
        printf("Temperature in Celsius = %.2f\n", result);
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        result = (temp * 9.0 / 5.0) + 32.0;
        printf("Temperature in Fahrenheit = %.2f\n", result);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
