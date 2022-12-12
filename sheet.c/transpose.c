#include<stdio.h>
int main(){
    int m[3][3] , t[3][3] ;
    int i , j ;
    printf("Enter the value in matrix");
    for(i=0 ; i<3; i++){
        for(j=0;j<3;j++){
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            t[j][i]=m[i][j];
        }
    }
     printf("Before Transpose of a matrix is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t" , m[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of a matrix is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t" , t[i][j]);
        }
        printf("\n");
    }
    printf("This file is made by Ayush Pathak");
    
}