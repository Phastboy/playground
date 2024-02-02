/**
 * main - prints the status of the program
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc!=2) {
        printf("no argument\n");
        return 1;
    }
    printf("hello %s\n", argv[1]);
    return 0;
}
