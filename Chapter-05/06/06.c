#include <stdio.h>

int main(void) {
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
    int firstSum, secondSum, total;

    printf("Enter a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6,
          &d7, &d8, &d9, &d10, &d11, &d12);

    firstSum = d1 + d3 + d5 + d7 + d9 + d11;
    secondSum = d2 + d4 + d6 + d8 + d10;
    total = firstSum * 3 + secondSum - 1;
    total = 9 - total % 10;

    if (d12 == total) {
        printf("VALID\n");
    } else {
        printf("NOT VALID\n");
    }

    return 0;
}