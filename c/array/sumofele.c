#include<stdio.h>
#include<conio.h>
void main(){
    int p[50],n,i,sum;
    sum = 0;
    printf("enter the value n:");
    scanf("%d",&n);
    printf("enter the %d number in array\n",n);
    for ( i = 0; i < n-1; i++)
    {
        scanf("%d",&p[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        sum = sum + p[i];
    }
    printf("the sum of %d element of the array is %d",n,sum);
    return ;
}