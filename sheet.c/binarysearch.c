#include<stdio.h>
int main(){
    int n , i , a , low , high , mid ;
    printf("Enter the no. of element in the array");
    scanf("%d" , &n);
    int array[n];
    printf("Enter the elements in a sorted manner:\n");
    for(i=0;i<n;i++){
        scanf("%d" ,&array[i]);
    }
    printf("Enter the value to be find");
    scanf("%d" ,&a);
    low =0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(array[mid]<a)
        low=mid+1;
        else if(array[mid]==a){
            printf("%d found at the location %d",a ,mid+1);
            break;
        }
        else
        high=mid-1;
        mid=(low+high)/2;
    }
    if(low>high)
    printf("%d is not present in the array\n" , a);
    printf("This file is made by Ayush Pathak");
    return 0;


    }