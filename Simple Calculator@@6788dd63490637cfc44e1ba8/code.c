#include <stdio.h>

int main() {
    double num1, num2;   // Declare two double variables for operands
    char operator;       // Declare a variable for the operator

    scanf("%lf", &num1);
    
    scanf(" %c", &operator);  // Space before %c to capture any leading whitespaces

    scanf("%lf", &num2);

    // Perform the operation based on the operator input
    if (operator == '+') {
        printf("%.2lf\n", num1 + num2);
    } 
    else if (operator == '-') {
        printf("%.2lf\n", num1 - num2);
    } 
    else if (operator == '*') {
        printf("%.2lf\n", num1 * num2);
    } 
    else if (operator == '/') {
        if (num2 != 0) {
            printf(" %.2lf\n", num1 / num2);
        } else {
            printf("error");
        }
    } 
    else {
        printf("error");
    }

    return 0;
}
