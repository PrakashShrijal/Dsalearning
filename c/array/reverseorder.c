#include<stdio.h>
#include<conio.h>
void main(){
    int p[100],i,n;
    printf("Enter the number of element:");
    scanf("%d", &n);
    printf("enter %d element \n",n);
    for ( i = 0; i < n; i++)
    {
        printf("element %d :-",i+1);
        scanf("%d",&p[i]);
    }
    printf("element in reverse order are:");
    for ( i = n-1; i >= 0; i--)
    {
        printf("%d\t",p[i]);
    }
    
}