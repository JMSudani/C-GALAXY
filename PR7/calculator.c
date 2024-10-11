#include<stdio.h>

 main() {
    char operator;
    float num1, num2;

    while (1) {
     
        printf("Enter operator (+, -, *, /) or 0 to exit: ");
        scanf(" %c", &operator);

        
        if (operator == '0') {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

       
        printf("Enter first number: ");
        scanf("%f", &num1);
        
        printf("Enter second number: ");
        scanf("%f", &num2);

       
        switch (operator) {
            case '+':
                printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0) {
                    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                } else {
                    printf("Error: Division by zero.\n");
                }
                break;
            default:
                printf("Error: Invalid operator.\n");
                break;
        }
    }


}

