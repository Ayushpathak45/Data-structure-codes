#include<stdio.h>
int main(){

    int a[100] , b[100] ,c[100] ;
    int i , n;
    printf("Enter the no. of element in a");
    scanf("%d" ,&n);
    printf("enter Element of array");
    for(i=0;i<n;i++){
    scanf("%d" , &a[i]);
    }
    printf("Element of a are\n");
    for(i=0;i<n;i++){
    printf("%d\n" , a[i]);
    }
    printf("enter Element of array b\n");
    for(i=0;i<n;i++){
    scanf("%d" , &b[i]);
    }
    printf("Element of b are\n");
    for(i=0;i<n;i++){
    printf("%d\n" , b[i]);
    }
    printf("subtraction of array");
    for(i=0;i<n;i++){
    c[i] = a[i]-b[i];
    }
    printf("subtraction of element is\n");
    for(i=0;i<n;i++){
    printf("%d\n" , c[i]);
    }


}