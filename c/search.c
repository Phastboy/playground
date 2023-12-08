#include <stdio.h>

int main(void)
{
    int numbers[]={1, 10, 20, 25, 50, 100, 250, 500};
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    printf("You entered: %d\n", n);
    for (int i = 0;  i < 8; i++) {
       if (n==numbers[i])
       {
           printf("found\n");
           return 0;
       }
    }
    printf("not found\n");
    return 1;
}

