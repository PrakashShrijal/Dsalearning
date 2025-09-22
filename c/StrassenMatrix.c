#include<stdio.h>
#include<conio.h>

#define N 2

void strassen(int A[N][N], int B[N][N], int C[N][N]){
    int M1, M2, M3, M4, M5, M6, M7;

    M1 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    M2 = (A[1][0] + A[1][1]) * B[0][0];
    M3 = A[0][0] * (B[0][1] - B[1][1]);
    M4 = A[1][1] * (B[1][0] - B[0][0]);
    M5 = (A[0][0] + A[0][1]) * B[1][1];
    M6 = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    M7 = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);

    C[0][0] = M1 + M4 - M5 + M7;
    C[0][1] = M3 + M5;
    C[1][0] = M2 + M4;
    C[1][1] = M1 - M2 + M3 + M6;

}

void main(){
    int A[N][N], B[N][N], C[N][N];
    int i, j;

    

    printf("Enter element in the first 2*2 matrix: \n");
    for(i = 0; i<N; i++){
        for(j=0; j<N; j++){
            scanf("%d", &A[i][j]);

        }
    }

    printf("Enter element in the second 2*2 matrix :\n");
    for(i = 0; i<N; i++){
        for(j = 0; j< N; j++){
            scanf("%d", &B[i][j]);
        }
    }

    strassen(A, B, C);

    printf("\n Resultant Matrix :\n");
    for(i =0 ; i<N; i++){
        for(j =0; j<N;  j++){
            printf("%d ", C[i][j]);

        }
        printf("\n");
    }
    getch();
}