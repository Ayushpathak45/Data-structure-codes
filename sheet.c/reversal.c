// #include<stdio.h>
// int main(){

//     int a[5];
//     int i ;
//      printf("Enter five elements\n");
//      for(i=0 ; i<5 ; i++){
//         scanf("%d", &a[i]);
//      }
//      printf("Elements of array are : \n");
//      for(i=4;i>=0;i--){
//         printf("%d\n" , a[i]);
//      }
// }

#include <stdio.h>
#include <stdlib.h>
#define n 6
int main(){
    int arr[n] = {9, 8, 7, 2, 4, 3};
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }
}