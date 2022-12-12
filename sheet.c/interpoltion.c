#include<stdio.h>
int interpolationsearch(int arr[], int arr_size , int search){
    int lo=0;
    int hi=arr_size-1;
    //start the loop
    while(lo<=hi && search>=arr[lo]&& search<=arr[hi] ){
        if(lo==hi){
        if(arr[lo]==search)
        return -1;
    }
    int pos=lo+(((double)(hi-lo)/(arr[hi]-arr[lo]))*
            (search-arr[lo]));
    if(arr[pos]==search)
    return pos;
    if(arr[pos]<search)
    lo=pos+1;
    else
    hi=pos-1;

    }
    return -1 ;


}
int main(){
    int n;
    printf("Enter the number of elements in array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    // Enter the element to be search
    int search;
    printf("Enter the element to be search");
    scanf("%d",&search);
    //calling function
    int x =interpolationsearch(arr, n , search);
    if(x != -1)
    printf("Element is present at index %d",x);
    else
    printf("element is not present in array");


}