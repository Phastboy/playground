/**
 * main - function to create a linked list of numbers, and to print the list, and to free the memory, return the number of elements/node in the list.
 * @param: int argc, char *argv[]
 * @return: int
 */

#include <stdio.h>
#include <stdlib.h>

/* Define the structure of the node */
typedef struct numNode {
    int num;
    struct numNode *next;
} numNode;

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage: numList <num1> <num2> ... <numN>\n");
        return 1;
    }

    numNode *head; /* pointer to the first node in the list */

    /* Add the numbers to the list */
    for (int i = 1; i < argc; i++) /* start at 1 to skip the program name */
    {
        numNode *newNode = malloc(sizeof(numNode)); /* allocate memory for the new node */

        /* Check if malloc failed */
        if (newNode == NULL) {
            printf("Error: malloc failed\n");
            return 1;
        }

        int numbers = atoi(argv[i]); /* convert the string to an integer */
        newNode->num = numbers; /* set the value of the new node */
        newNode->next = head; /* set the next pointer of the new node to the current head */
        head = newNode; /* set the head to the new node */

        printf("Added %d to the list\n", newNode->num); /* print the number added to the list */
    }

    printf("The list contains: ");
    numNode *current = head; /* pointer to the current node in the list */
    int count = 0; /* counter for the number of elements in the list */

    /* Print the list */
    while (current != NULL)
    {
        printf("%d ", current->num); /* print the number in the current node */
        current = current->next; /* move to the next node */
        count++; /* increment the counter */
    }
    printf("\n");

    /* Free the memory */
    while (head != NULL)
    {
        numNode *temp = head; /* pointer to the current node */
        head = head->next; /* move to the next node */
        free(temp); /* free the memory of the current node */
    }

    return count; /* return the number of elements in the list */
}
