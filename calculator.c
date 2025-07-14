#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  // Space before %c to catch leftover newline

    printf("Enter second number: ");
    scanf("%f", &num2);
    if(op == '+') {
        printf("Result: %.2f\n", num1 + num2);
    }
    else if(op == '-') {
        printf("Result: %.2f\n", num1 - num2);
    }
    else if(op == '*') {
        printf("Result: %.2f\n", num1 * num2);
    }
