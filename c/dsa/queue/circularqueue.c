#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;

int isFull()
{
    return (front == (rear + 1) % MAX);
}
int isEmpty()
{
    return (front == -1);
}
void enqueue(int value)
{
    if (isFull())
    {
        printf("Queue is Full. Cannot enqueue %d\n", value);
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        printf("%d enqueue to the queue\n", value);
    }
}
void dequeue()
{
    if (isEmpty())
    {
       printf("Quueue is Empty. Cannot dequeue\n");
    }else{
        printf("%d dequeue from the queue\n", queue[front]);
        if() 
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
    }
}