//  q2(4 lined structure)

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node
{
    int data;
    struct Node *next;
};

// Define the structure for the Queue
struct Queue
{
    struct Node *front;
    struct Node *rear;
};

// Function to create an empty queue
struct Queue *createQueue()
{
    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

// Function to enqueue (add an element to the queue)
void enqueue(struct Queue *queue, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // If the queue is empty, both front and rear should point to the new node
    if (queue->rear == NULL)
    {
        queue->front = queue->rear = newNode;
        return;
    }

    // Add the new node at the end of the queue
    queue->rear->next = newNode;
    queue->rear = newNode;
}

// Function to dequeue (remove an element from the queue)
int dequeue(struct Queue *queue)
{
    if (queue->front == NULL)
    {
        printf("Queue is empty\n");
        return -1; // Return -1 if the queue is empty
    }

    // Get the node to be dequeued
    struct Node *temp = queue->front;
    int data = temp->data;

    // Move the front pointer to the next node
    queue->front = queue->front->next;

    // If the queue becomes empty, set rear to NULL
    if (queue->front == NULL)
    {
        queue->rear = NULL;
    }

    // Free the memory of the dequeued node
    free(temp);

    return data; // Return the dequeued data
}

// Function to traverse and print the queue elements
void traverse(struct Queue *queue)
{
    if (queue->front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    struct Node *current = queue->front;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Main function to demonstrate the queue operations
int main()
{
    struct Queue *queue = createQueue();

    // Enqueue some elements
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    printf("Queue after enqueuing 10, 20, 30:\n");
    traverse(queue); // Expected Output: 10 20 30

    // Dequeue an element
    printf("Dequeued element: %d\n", dequeue(queue)); // Expected Output: 10

    // Traverse the queue after dequeue
    printf("Queue after dequeue:\n");
    traverse(queue); // Expected Output: 20 30

    // Dequeue all elements
    printf("Dequeued element: %d\n", dequeue(queue)); // Expected Output: 20
    printf("Dequeued element: %d\n", dequeue(queue)); // Expected Output: 30
    printf("Queue after all dequeues:\n");
    traverse(queue); // Expected Output: Queue is empty

    return 0;
}
