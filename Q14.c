/*
14.Copy one array into another.
*/

#include<stdio.h>

int main(){
    int arr1[100] ={1,2,3,5,6};
    int n=5;
    int arr2[100];

    for(int i=0; i<n;i++){
        arr2[i] = arr1[i];
    }

    printf("The new copied array is: ");
    
    for(int i=0; i<n; i++){
        printf("%d ",arr2[i]);
    }

return 0;
}