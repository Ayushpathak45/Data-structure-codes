#include<stdio.h>
int main(){
    int a[3][3] , b[3][3] , c[3][3] ,i  , j;
    printf("Enter the element of matrix A");
    for(i=0 ; i<3 ; i++){
        for(j=0; j<3 ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    printf("Enter the element of matrix B");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf(" the matrix A is\n");
    for(i=0 ; i<3 ; i++){
        for(j=0; j<3 ; j++){
            printf("%d\t" , a[i][j]);
        }
        printf("\n");
    }

    printf("the matrix B is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j] ;
        }
        
    }
    printf("The sum of matrix is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("This file is made by Ayush Pathak");
    return 0 ;
}