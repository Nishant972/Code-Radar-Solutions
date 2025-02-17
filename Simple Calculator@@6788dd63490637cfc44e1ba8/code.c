#include<stdio.h>

int main() {
    int a, b;
    char operator;
    
    scanf("%d %d %c", &a, &b, &operator);

    switch (operator) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Result: %d\n", a / b);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
            break;
    }

    return 0;
}
