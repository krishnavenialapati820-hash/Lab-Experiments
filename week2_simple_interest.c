#include <stdio.h>

int main() {
    float principal, time, rate, si;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Time period (in years): ");
    scanf("%f", &time);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    si = (principal * time * rate) / 100.0;

    printf("Simple Interest = %.2f\n", si);
    printf("Total Amount = %.2f\n", principal + si);

    return 0;
}
