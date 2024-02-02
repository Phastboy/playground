/**
 * main - entry point
 * operator - testing condition
 *
 * Return - Always 0
 */

#include <stdio.h>

void operator(int n)
{
    printf("the OR operator returns %d\n", (n%2)||(n%3));
    printf("the AND operator returns %d\n", (n%2)&&(n%3));
}
int main()
{
    printf("enter a number that is not greater than 4: ");
    int n;
    scanf("%d", &n);
    operator(n);
    return 0;
}
