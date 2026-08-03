/*
19.Rotate the array to the left by one position.
*/

#include<stdio.h>

int main(){
    int arr[] ={1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = arr[0];
    for(int i=0; i<n-1; i++){
      
        arr[i] = arr[i+1];
    }
    printf("New Array is: ");

    arr[n-1] = target;
    for(int i=0; i<n;i++){
        printf("%d ",arr[i]);
    }

return 0;
}