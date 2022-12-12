#include<stdio.h>
int main(){

    int n , i ;
    int sum=0;
    int total; 
    int numbers[50];
    printf("How many numbers");
    scanf("%d",&n);
    for(i=0 ; i<n ; i++){
        scanf("%d" , &numbers[i]);
        sum= sum + numbers[i];
    }
    
    total = (n*(n+1))/2;

    int ans = total-sum;
    printf("Your missing number is %d" , ans );
    return 0 ;
}