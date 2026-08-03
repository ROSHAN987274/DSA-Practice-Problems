/*
4.Find the largest and smallest element in an array.
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of the array element:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int smallest = arr[n-1];
    int largest= arr[0];

    for(int i=0; i<n; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
        if(largest<arr[i]){
            largest = arr[i];
        }
    }
    printf("The largest element in the array is:%d \n",largest);
    printf("The smallest element in the array is:%d ",smallest);

return 0;

}