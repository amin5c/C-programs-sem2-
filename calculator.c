#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nAddition = %.2f", num1 + num2);
    printf("\nSubtraction = %.2f", num1 - num2);
    printf("\nMultiplication = %.2f", num1 * num2);

    if (num2 != 0) {
        printf("\nDivision = %.2f", num1 / num2);
    } else {
        printf("\nDivision by 0 not possible");
    }

    return 0;
}
