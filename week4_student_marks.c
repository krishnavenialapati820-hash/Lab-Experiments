#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float average;

    printf("Enter marks of 5 subjects (integers): ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = (float)total / 5.0;

    printf("\n--- Result ---\n");
    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}
