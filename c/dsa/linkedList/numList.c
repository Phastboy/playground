#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

node* numList(int argc, char *argv[])
{
    node *head=NULL;
    for (int i=1; i<argc; i++)
    {
        node *newNode=malloc(sizeof(node));
        int num=atoi(argv[i]);
        newNode->number=num;
        newNode->next=head;
        head=newNode;
        printf("The number %d added to the list\n", newNode->number);
    }
    return head;
}

int main(int argc, char *argv[])
{
    if (argc<2)
    {
        printf("Usage: numList number1 number2 ... numberN\n");
        return 1;
    }
    numList(argc, argv);
    return 0;
}
