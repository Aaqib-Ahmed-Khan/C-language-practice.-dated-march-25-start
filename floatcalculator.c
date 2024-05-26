#include <stdio.h>

int main() {
    float n1, n2;

    printf("Enter first number: ");
    scanf("%f", &n1);

    printf("Enter an operator (+, -, *, /): ");
    char ch;
    scanf(" %c", &ch);  // Note the space before %c to consume any whitespace characters

    printf("Enter second number: ");
    scanf("%f", &n2);

    if (ch == '+') {
        printf("Sum of %f and %f is: %f\n", n1, n2, (n1 + n2));
    } else if (ch == '-') {
        printf("Difference of %f and %f is: %f\n", n1, n2, (n1 - n2));
    } else if (ch == '*') {
        printf("Multiplication of %f and %f is: %f\n", n1, n2, (n1 * n2));
    } else if (ch == '/') {
        if (n2 != 0) {
            printf("Division of %f and %f is: %f\n", n1, n2, (n1 / n2));
        } else {
            printf("Error: Division by zero\n");
        }
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}
