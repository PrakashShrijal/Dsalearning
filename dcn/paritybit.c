#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char data[20];
    int i,count = 0;
    char parity_bit;

    printf("Enetr the data in binary form ");
    scanf("%s",data);
    for(int i = 0; data[i] != '\0'; i++){
        if (data[i] == '1')  
        {
            count++;
        }
        
    }
    if(count % 2 == 0)
    parity_bit = '0';
    else
    parity_bit = '1';
    printf("\n Original Data              :%s",data);
    printf("\neven parity Bit             :%C",parity_bit);
    printf("\nTransmitted Message         :%s%c",data,parity_bit);
    getch();

}