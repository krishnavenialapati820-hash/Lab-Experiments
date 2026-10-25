#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;

    printf("Enter the three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Semi-perimeter (s) = %.2lf\n", s);
        printf("Area of the triangle = %.2lf\n", area);
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
