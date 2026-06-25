/*
 * ============================================
 *  Basic Calculator Program in C
 *  Operations: Addition, Subtraction,
 *              Multiplication, Division
 *  Selection : switch-case
 * ============================================
 */

#include <stdio.h>

int main() {
    double num1, num2, result;
    int choice;

    /* ── Display Menu ── */
    printf("\n=============================\n");
    printf("     BASIC CALCULATOR MENU   \n");
    printf("=============================\n");
    printf("  1. Addition       (+)\n");
    printf("  2. Subtraction    (-)\n");
    printf("  3. Multiplication (*)\n");
    printf("  4. Division       (/)\n");
    printf("  5. Exit\n");
    printf("=============================\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    /* ── Exit early if user chooses 5 ── */
    if (choice == 5) {
        printf("Exiting calculator. Goodbye!\n");
        return 0;
    }

    /* ── Validate menu choice ── */
    if (choice < 1 || choice > 4) {
        printf("Invalid choice! Please enter a number between 1 and 5.\n");
        return 1;
    }

    /* ── Read operands ── */
    printf("Enter first number  : ");
    scanf("%lf", &num1);
    printf("Enter second number : ");
    scanf("%lf", &num2);

    /* ── Perform selected operation ── */
    switch (choice) {

        case 1:  /* Addition */
            result = num1 + num2;
            printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case 2:  /* Subtraction */
            result = num1 - num2;
            printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case 3:  /* Multiplication */
            result = num1 * num2;
            printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case 4:  /* Division */
            if (num2 == 0) {
                printf("\nError: Division by zero is not allowed!\n");
                return 1;
            }
            result = num1 / num2;
            printf("\nResult: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            break;

        default:
            printf("\nUnexpected error. Exiting.\n");
            return 1;
    }

    return 0;
}
