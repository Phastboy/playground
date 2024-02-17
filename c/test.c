#include <stdio.h>

/**
 * format - format with %i and %d
 * @i: integer
 * @d: integer
 * Return: void
 */
void format(int number)
{
    printf("with proper grammar, but the outcome is a piece of art,\n");
    printf("with i = %i, and d = %d\n", number, number);
}

int main(void)
{
    format(500);
    return (0);
}
