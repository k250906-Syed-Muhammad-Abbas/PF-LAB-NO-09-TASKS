#include <stdio.h>

float add(float number_1, float number_2) {
    return number_1 + number_2;
}

float subtract(float number_1, float number_2) {
    return number_1 - number_2;
}

float multiply(float number_1, float number_2) {
    return number_1 * number_2;
}

float divide(float number_1, float number_2) {
    return number_1 / number_2;
}

int main() {
    float number_1, number_2, result;
    int choice;
    float (*operation_ptr)(float, float);

    printf("WELCOME TO THE MINI CALCULATOR!\n");

    printf("ENTER FIRST NUMBER:\t");
    scanf("%f", &number_1);
    printf("ENTER SECOND NUMBER:\t");
    scanf("%f", &number_2);

    printf("\nCHOOSE YOUR OPERATION:\n");
    printf("1. ADDITION\n2. SUBTRACTION\n3. MULTIPLICATION\n4. DIVISION\n");
    printf("ENTER YOUR CHOICE:\t");
    scanf("%d", &choice);

    if(choice == 1) {
        operation_ptr = add;
        printf("\nYOU CHOSE ADDITION.\n");
    }
    else if(choice == 2) {
        operation_ptr = subtract;
        printf("\nYOU CHOSE SUBTRACTION.\n");
    }
    else if(choice == 3) {
        operation_ptr = multiply;
        printf("\nYOU CHOSE MULTIPLICATION.\n");
    }
    else if(choice == 4) {
        if(number_2 == 0) {
            printf("\nDIVISION BY ZERO IS NOT ALLOWED!\n");
            return 0;
        }
        operation_ptr = divide;
        printf("\nYOU CHOSE DIVISION.\n");
    }
    else {
        printf("\nINVALID CHOICE. PLEASE RESTART THE PROGRAM.\n");
        return 0;
    }

    result = operation_ptr(number_1, number_2);
    printf("THE RESULT IS: %.2f\n", result);
    printf("\nTHANK YOU FOR USING THE MINI CALCULATOR!\n");

    return 0;
}

