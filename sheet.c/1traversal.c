#include<stdio.h>
int main(){
    int a[3] ;
    int i ;
    printf(" Enter three element \n");
    for(i=0 ; i<3 ; i++){
        scanf(" %d " , &a[i]);
    }
    printf("The numbers you entered are \n");
    for(i=0 ; i<3 ; i++){
        printf(" %d \n",a[i]);
    }
}