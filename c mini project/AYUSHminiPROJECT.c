// AYUSH RAJ (ERP 10352)
#include <stdio.h>

// Function to display binary of a number
void printBinary(int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" ");
    }
    printf("\n");
}

int main() {
    int a, b, choice, result;
    char again;

    do {
        printf("\n=================================\n");
        printf("     BITWISE UTILITY TOOL\n");
        printf("=================================\n");

        printf("Enter first integer: ");
        scanf("%d", &a);

        printf("Enter second integer: ");
        scanf("%d", &b);

        printf("\nBinary Representation:\n");
        printf("A = ");
        printBinary(a);
        printf("B = ");
        printBinary(b);

        printf("\nChoose Operation:\n");
        printf("1. AND (&)\n");
        printf("2. OR (|)\n");
        printf("3. XOR (^)\n");
        printf("4. Left Shift (<<)\n");
        printf("5. Right Shift (>>)\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                result = a & b;
                printf("\nA & B = %d\n", result);
                break;

            case 2:
                result = a | b;
                printf("\nA | B = %d\n", result);
                break;

            case 3:
                result = a ^ b;
                printf("\nA ^ B = %d\n", result);
                break;

            case 4:
                result = a << b;
                printf("\nA << B = %d\n", result);
                break;

            case 5:
                result = a >> b;
                printf("\nA >> B = %d\n", result);
                break;

            case 6:
                printf("\nThank you for using Bitwise Utility Tool!\n");
                return 0;

            default:
                printf("\nInvalid choice!\n");
        }

        printf("\nBinary Result:\n");
        printBinary(result);

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    printf("\nProgram terminated successfully.\n");
    return 0;
}

// AYUSH RAJ 
// ERP 10352
// MINI PROJECT = BITWISE UTILITY TOOL

// output


// =================================
//      BITWISE UTILITY TOOL
// =================================
// Enter first integer: 4
// Enter second integer: 8

// Binary Representation:
// A = 0000 0000 0000 0000 0000 0000 0000 0100
// B = 0000 0000 0000 0000 0000 0000 0000 1000

// Choose Operation:
// 1. AND (&)
// 2. OR (|)
// 3. XOR (^)
// 4. Left Shift (<<)
// 5. Right Shift (>>)
// 6. Exit
// Enter choice: 2

// A | B = 12

// Binary Result:
// 0000 0000 0000 0000 0000 0000 0000 1100

// Do you want to continue? (y/n): n

// Program terminated successfully.
// PS C:\Users\LENOVO LOQ\OneDrive\Desktop\c mini project>