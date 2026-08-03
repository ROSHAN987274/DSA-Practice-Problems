/*
20.Rotate the array to the right by one position.
*/

#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6};

    int n = sizeof(arr) / sizeof(arr[0]);

    int target = arr[n-1];

    for(int i = n-1; i>0; i--){
        arr[i] = arr[i-1];
    }

    arr[0] = target;

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}