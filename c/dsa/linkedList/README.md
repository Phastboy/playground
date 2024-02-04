# Linked list

**Basic TODO:**
- create a linked list.
- print the the list to the standard output.
- record the number of element present in the list.

**Advance T0D0**
- Insert to the list.
- sort the list.
- search for an element in the list.
- print the element index.
- delete the element.
- print the new list.
- delete the list.

## Data I/O

***Input:*** numbers(integers).

***Output:***
- Elements in the linked list.
- Numbers of element in the linked list.

## How to collect input data

1. command line arguments.
2. List of numbers from prompt.
3. List of numbers from a file.

## Algorithm

***To create a linked list***

**Append**

1. start a function
2. initialize the head node to be empty.
3. collect input data or assume you have input data.
4. allocate a node for input data.
5. end this process if node allocation failed, otherwise
6. store the data in some part allocated node.
7. set the remaining space to be empty.
8. if linked list is empty, set the allocated node as the head node, otherwise
9. iterate over the node to find the end of the list.
10. append the new node at the end of the list.
11. return the head node.
12. End the function.

**Prepend**


Boom!!! you just created a linked list.

***To print the element in each node and return the number of nodes***

1. start a function
2. let an integer variable(counter) equals zero, this helps in recording the number of nodes.
3. let a pointer point to the head node returned from the step above, this ensures you start transversing from the beginning of the list.
4. as long as the pointer is not null, print the element stored where it points to(iteration over only exiting node).
5. then update the pointer to point to the next node.
6. lastly, increment the counter. don't forget to break out of the loop.
7. return the counter.
8. end the function.

***To free the allocated memory***

1. start a function.
2. let a pointer point to the head node.
3. as long as the head node returned from the creation of the list is not null.
4. temporary store the next node.
5. free current pointer.
6. update the pointer to the next node.
7. end the function.
