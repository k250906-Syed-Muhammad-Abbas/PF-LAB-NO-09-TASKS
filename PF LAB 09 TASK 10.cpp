#include <stdio.h>
float average(int number_1, int number_2, int number_3) 
{
    return (number_1 + number_2 + number_3) / 3.0;
}

int main() 
{
    int number_1, number_2, number_3;
    float result;

    printf("ENTER FIRST NUMBER:\t");
    scanf("%d", &number_1);
    printf("ENTER SECOND NUMBER:\t");
    scanf("%d", &number_2);
    printf("ENTER THIRD NUMBER:\t");
    scanf("%d", &number_3);

    result = average(number_1, number_2, number_3);

    printf("THE AVERAGE OF THE THREE NUMBERS IS: %.2f\n", result);

    return 0;
}

