#include<stdio.h>
#include<conio.h>
void main(){
    int p[3][4],q[3][4],r[3][4],i,j;
    printf("enter the elelment in the first matrix");
    for(i = 0; i < 3 ; i++ ){
        for(j = 0; j < 4; j++){
            scanf("%d",&p[i][j]);
        }
    }
    printf("enter the elelment in the second matrix");
    for(i = 0; i < 3 ; i++ ){
        for(j = 0; j < 4; j++){
            scanf("%d",&q[i][j]);
        }
    }
    for(i = 0; i < 3 ; i++ ){
        for(j = 0; j < 4; j++){
            r[i][j] = p[i][j] + q[i][j];
        
        for(i = 0;i < 3; i++){
            for(j = 0; j < 4; j++){
                printf("%d",r[i][j]);
            }}
            printf("\n");
        }
    } 
    return ;
}