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

    printf("enter your quotent: ");
    scanf("%d", &x);
    printf("enter your divisor: ");
    scanf("%d", &y);
    printf("if x=%d y=%d\n", x, y);
    printf("x/y equals %d\n", x/y);
    printf("(float) x/y  equals %f\n", (float)x/y);
    return 0;
}
