#include<stdio.h>
#include<conio.h>


void linearSearch(int arr[], int n , int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element is found !");
            break;
        }
    
        
    }
    printf("Element is not found!");
    
}
int main(){
    int arr[100];
    int n, key;

    printf("Enter the nummber :");
    scanf("%d",&n);
     
    printf("Enter the element in the array  :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
     printf("Enter the key  :");
     scanf("%d",&key);

     linearSearch(arr,n,key);

    return 0;
}