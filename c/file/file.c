#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    fp=fopen("filename", "w");
    fprintf(fp, "%s", "hello, world!\n");
    fclose(fp);
    return (0);
}
