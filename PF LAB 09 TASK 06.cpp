#include <stdio.h>
void calculate(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}

int main()
{
    int number_1, number_2;
    int sum;
    float avg;

    printf("ENTER THE FIRST NUMBER:\T\t");
    scanf("%d", &number_1);

    printf("ENTER THE SECOND NUMBER:\t");
    scanf("%d", &number_2);

    calculate(number_1, number_2, &sum, &avg);

    printf("\nSUM = %d", sum);
    printf("\nAVERAGE = %.2f", avg);

    return 0;
}

