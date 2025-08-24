#include<stdio.h>
#define MAX 5
int queue[MAX];
int front = -1 ,rear = -1;
// function to check is the queue is full
int isFull(){
    return rear == MAX-1;
}
//function to check if the queue is empty
int isEmpty(){
    return front ==-1 ||front> rear;
}
 // function to add an element to the queue (enqueue)
 void enqueue(int value){
    if (isFull()){
        printf("Queue is full .Cannot enqueue %d\n",value);

    }else{
        if (front == -1 )front = 0;
        rear++;
        queue[rear] = value;
        printf("%d enqueue to the queue \n ",value);
       
    }
 }
 //function to remove an element from the queue(dequeue)
 void dequeue(){
    if (isEmpty())
    {
        printf("queue is empty. Cannnot dequeue\n");
    }else{
        printf("%d dequeue from the queue \n",queue[front]);
        front++;
    }
    
 }
 void display(){
    if(isEmpty()){
        printf("Queue is empty\n");
    }else{
        printf("Queue element :");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
 }
 int main(){
    enqueue(20);
     enqueue(30);
     enqueue(40);
     display();
     dequeue();
     display();
     enqueue(60);
     display();
     return 0;
 
 }