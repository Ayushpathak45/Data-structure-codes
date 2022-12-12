#include<stdio.h>
int main(){
    int array[100] ;
    int positon , i , n ;
    printf("Enter number of elementbin array\n");
    scanf("%d", &n);
    printf("Enter %d elements \n" , n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the location here you want to enter");
    scanf("%d" , &positon);
    if(positon>=n+1){
        printf("deletion not possible\n");
    }
    else{
        for(i=positon-1;i<n;i++){
            array[i]=array[i+1];
        }
        printf("Resultant array:\n");
        for(i=0;i<n-1;i++){
            printf("%d\n",array[i]);
        }
        return 0 ;

    }
}