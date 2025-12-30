// abhishek kumar kashi , 10056 ,Calculator using Switch Case

#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Result = %d", a + b);
            break;
        case '-':
            printf("Result = %d", a - b);
            break;
        case '*':
            printf("Result = %d", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero not allowed");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
