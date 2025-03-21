
#include<stdio.h>

void fibonacci(int n);

int main() {
    int n;
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid input\n");
        return 0;
    } else {
        fibonacci(n);
    }
    return 0;
}

void fibonacci(int n) {
    int a = 0, b = 1, c;

    if(n == 1) {
        printf("%d\n", a);
        return;
    }

    printf("%d %d ", a, b);

    for(int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}
