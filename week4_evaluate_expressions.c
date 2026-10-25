#include <stdio.h>

int main() {
    int a = 2, b = 3, c = 4, d = 5, e = 6, f = 7, g = 8;
    int res_a = a + b * c + (d * e) + f * g;
    printf("a. A + B * C + (D * E) + F * G = %d\n", res_a);

    float fa = 9.0, fb = 3.0, fc = 2.0, fd = 6.0;
    float res_b = fa / fb * fc - fb + fa * fd / 3.0;
    printf("b. A / B * C - B + A * D / 3 = %.2f\n", res_b);

    int A = 5, B = 10;
    int res_c = A++ + B-- - A;
    printf("c. A+++B---A = %d (Final A=%d, B=%d)\n", res_c, A, B);

    int i = 5;
    int j = (i++) + (++i);
    printf("d. J = (i++) + (++i) = %d (Final i=%d)\n", j, i);

    return 0;
}
