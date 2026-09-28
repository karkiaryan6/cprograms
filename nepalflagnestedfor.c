#include <stdio.h>

int main() {
    int row, col;

    for(row = 1; row <= 4; row++) {
        for(col = 1; col <= 5-row; col++) {
            printf("* \t");
        }
        printf("\n");
    }

    for(row = 1; row <= 4; row++) {
        for(col = 1; col <= row; col++) {
            printf("* \t");
        }
        printf("\n");
    }

    return 0;
}
