#include<stdio.h>
#include<conio.h>
void main(){
    int d[4] ,p[3],code[7];
    int i,error,s1,s2,s3;
    printf("Enetr 4 data bits(D1,D2,D3,D4) :\n");
    for(i = 0; i< 4; i++){
        printf("D%d",i+1);
        scanf("%d",&d[i]);
    }

    p[0] = d[0]^d[1]^d[3];
    p[1] = d[0]^d[2]^d[3];
    p[2] = d[1]^d[2]^d[3];


    code[0] = p[0];
    code[0] = p[1];
    code[0] = d[0];
    code[0] = p[2];
    code[0] = d[1];
    code[0] = d[2];
    code[0] = d[3];

    printf("\nHumming code (7,4) :");
    for ( i = 0; i < 7; i++)
    {
        printf("%d",code[i]);
    }
    printf("enetr the position of error");
    scanf("%d",&error);
    if (error>0 && error<=7){
        code[error-1] ^= 1;
        printf("corrupted code :");
        for ( i = 0; i < 7; i++)
        {
            printf("%d",code[i]);
        }
        
    }

   s1 = code[0]^code[2]^code[4]^code[6];
   s2 = code[1]^code[2]^code[5]^code[6];
   s3 = code[3]^code[4]^code[5]^code[6];

   int error_pos = s1 + s2*2 +s3*4;
   if(error_pos == 0){
    printf("no error");
   }
   else{
    printf("error detected at pos  : %d",error_pos);
    code[error_pos-1] ^= 1;
    printf("corrected code :");
    for(i = 0 ;i <7; i++){
        printf("%d",code[i]);
    }
   }
    
}