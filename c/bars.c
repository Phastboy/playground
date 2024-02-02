/**
 * This program prints a square of bars
 *
 */
#include <stdio.h>

int main()
{
    int bars=5, i,j;
    for (i = 0; i < bars; i++) {
        for (j = 0;j < bars;j++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
