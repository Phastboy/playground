/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
    int x, y;

    x=7;
    y=5;

    printf("if x=%d y=%d\n", x, y);
    printf("x/y equals %d\n", x/y);
    printf("(float) x/y  equals %f\n", (float)x/y);
    return 0;
}
