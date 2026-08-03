/*
13.Merge two arrays into a third array.
*/
#include<stdio.h>

int main(){
    int arr1[100] = {1,2,3,4,5,6,7};
    int arr2[100] = {1,2,3};

    int n1 = 7;
    int n2 = 3;
    int arr3[n1+n2];

    for(int i=0; i<n1; i++){
        arr3[i] = arr1[i];
    }
    for(int i=0; i<n2; i++){
        arr3[n1+i] = arr2[i];
    }
    printf("The new Array is: ");
    for(int i=0; i<n1+n2; i++){
        printf("%d ",arr3[i]);
    }

return 0;
}