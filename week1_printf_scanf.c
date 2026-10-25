#include <stdio.h>

int main() {
    int age;
    float marks;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("\n--- Entered Details ---\n");
    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);

    return 0;
}
