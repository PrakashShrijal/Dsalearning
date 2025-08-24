/*linear search*/
#include<stdio.h>
#include<conio.h>
void bubblesort(int p[],int n){
    int i,j,temp;
    for(i = 0; i< n-1; i++){
        for(j =0; j < n-i-1; j++){
            if(p[j] > p[j+1]){
                //swap p[j] and p[j+1]
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}
void printarray(int p[],int size){
    int i;
    for(int i = 0; i< size; i++)
    printf("%d",p[i]);
printf("\n");

}
void main(){
   int p[100],h;
   printf("enter the number");
   scanf("%d",&h);
   printf("enetr the %d element in the array",h);
   for(int i=0; i<h; i++){
    scanf("%d",&p[i]);
   }
   int n = sizeof(p)/sizeof(p[0]);
   bubblesort(p,n);
   printf("sorted array: \n");
   printarray(p,n);
   return ;

}