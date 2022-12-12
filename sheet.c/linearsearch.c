#include<stdio.h>
int main() 
 {
    int array[20] ;
    int count=0;
    int   a , i;
    int n;
    printf("enter the no. of elemment");
    scanf("%d" ,&n);
    
   
    printf("Enter the number in the array");

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    printf("Enter the number to be searched");
    scanf("%d", &a);

    for(i=0;i<n;i++)
    {
        if (array[i]==a){
            printf("%d is preset at %d\t" , a , i+1);
            count++;
        }
    }
    if(count==0)
        printf("%d is not present in the array \n " , a );
    else 
        printf(" and %d is present %d times in the array.\n",a,count);
        printf("This file is made by Ayush Pathak");
        return 0;

}