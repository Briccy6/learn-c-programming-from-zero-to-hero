#include <stdio.h>

int main(void) {
    int choice;
    float num1, num2;

    printf("Simple Calculator\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            printf("Result: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Result: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Result: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
