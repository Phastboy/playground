#include <stdio.h>

int main(int argc, char *argv[])
{
    int a=4, b=3;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after xor, a=%d and b=%d\n", a, b);
    return 0;
}
