#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;
void enqueue(int element){
    if(rear == MAX -1){
        printf("queue is full cannot enqueue %d\n",element);
        return;
    }else{
        if (front == -1)
        {
            front = 0;
            rear ++;
            queue[rear] = element;
            printf("%d enqueue to the queue.\n",element);
        }
    }
}
    void dequeue(){
        if (front == -1 || front > rear)
        {
            printf("queue is empty! Cannot dequeue.\n");
            return;
        }else{
            printf("%d dequeued from the dequeue.\n",queue[front]);
            front++;
        }
        
    }
void display(){
    if (front == -1 || front > rear)
    {
        printf("queue is empty!\n");
        return;
    }else{
        printf("queue element are :");
        for (int i = front ; i <= rear; i++)
        {
            printf("%d", queue[i]);
        }
        printf("\n");
    }
    
}    

int main(){
    int choice, element;
    while(1){
        printf("\nQueue is operation :\n");
        printf("1.Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n"); 
        printf("4. Exit\n");
        printf("Enetr your choice");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}