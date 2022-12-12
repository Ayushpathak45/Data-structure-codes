#include<stdio.h>
int main(){
    int array[100];
    int positon , i , n , value ;
    printf("Enter the element in array\n");
    scanf("%d" ,&n);
    printf("Enter the %d elements\n" , n);
    for(i=0;i<n;i++){
        scanf("%d", &array[i]);
        
    }
    printf("Enter the location where you want to insert the element\n");
    scanf("%d" , &positon);
    printf("Enter the elemenbt to be inserted\n");
    scanf("%d", &value);

    for(i=n-1 ; i>=positon ; i--){
        array[i+1]=array[i];
        array[positon-1] = value;
    }
        printf("Resultant array is \n");
        for(i=0;i<=n;i++){
            printf("%d\n",array[i]);
            
    
        }
        return 0;
    }


