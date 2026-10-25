#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, ci;

    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Annual Rate of interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter Time period (in years): ");
    scanf("%lf", &time);

    amount = principal * pow((1 + rate / 100.0), time);
    ci = amount - principal;

    printf("Compound Interest = %.2lf\n", ci);
    printf("Total Amount = %.2lf\n", amount);

    return 0;
}
