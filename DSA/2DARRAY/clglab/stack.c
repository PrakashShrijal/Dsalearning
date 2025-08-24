#include<stdio.h>
#include<stdlib.h>

#define MAX[5];
 
int queue[MAX];
int front = -1;
int rear = -1;

//function to check if the queue is full
int isFull(){
    if (rear = MAX -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
//function to check if the queue is empty
int isEmpty(){
    if (front == -1 || front > rear)
    {
        return 1;
    }
   else
   {
    return 0;
   }
   

}