#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("ENTER THE VALUE OF X AND Y:\n");
    scanf("%d %d", &x, &y);

    printf("BEFORE SWAP: X = %d, Y = %d\n", x, y);
    swap(&x, &y);
    printf(" AFTER SWAP: X = %d, Y = %d\n", x, y);

    return 0;
}

