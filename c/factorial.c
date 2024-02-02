/**
 * factorial - calculate the factorial of a number
 * @n: the number
 *
 * Return: the factorial of n
 */

#include <stdio.h>

int factorial(int n)
{
    if (n==1) {
        return (1);
    }
    return (n*factorial((n-1)));
}

int main(void)
{
    int n;
    do {
        printf("number: ");
        scanf("%d", &n);
    }while (n<0);
    printf("factorial of the number %d is %d\n", n, factorial(n));
    return 0;
}
