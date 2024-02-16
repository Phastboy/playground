#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a linked list
struct Node* createLinkedList(int* inputData, int length) {
    // Initialize head as NULL
    struct Node* head = NULL;

    // Collect input data and create nodes
    for (int i = 0; i < length; i++) {
        // Allocate a node for input data
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        
        // Check for allocation failure
        if (!newNode) {
            fprintf(stderr, "Node allocation failed. Unable to create linked list.\n");
            return head; // Return current head (could be NULL)
        }

        // Assign data to the new node
        newNode->data = inputData[i];
        newNode->next = NULL;

        // Assign the new node as the head if the linked list is empty
        if (head == NULL) {
            head = newNode;
        } else {
            // Iterate over nodes to find the end of the list
            struct Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }

            // Append the new node at the end
            current->next = newNode;
        }
    }

    // Return the head of the linked list
    return head;
}

// Function to print the linked list
void printLinkedList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    int inputData[] = {1, 2, 3, 4, 5};
    int length = sizeof(inputData) / sizeof(inputData[0]);

    // Create the linked list
    struct Node* linkedListHead = createLinkedList(inputData, length);

    // Print the linked list
    printf("Linked List: ");
    printLinkedList(linkedListHead);

    return 0;
}

