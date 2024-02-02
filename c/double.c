/**
 * double.c
 *   A simple program that creates an array of a user-specified size and
 *   fills it with a sequence of numbers, each of which is twice the
 *   previous number.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size;
    int n;
    printf("array of which size do you want: ");
    scanf("%d", &size);
    printf("enter the first term of your sequence: ");
    scanf("%d", &n);

    int *sequence=(int *)malloc(size*sizeof(int));
    if (sequence==NULL) {
        printf("memory allocation failed\n");
        return 1;
    }
    sequence[0]=n;
    int i;
    for (i = 1; i < size; i++) {
        sequence[i]=sequence[i-1]*2;
        printf("%d\n", sequence[i]);
    }
    free(sequence);
    return 0;
}
