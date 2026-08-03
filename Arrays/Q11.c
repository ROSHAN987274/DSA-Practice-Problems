/*
11.Find the second largest element in an array.
*/

#include<stdio.h>

int SecondLargetst(int arr[],int n){
    int heighest = arr[0];
    int SH = arr[1];

    for(int i=0; i<n; i++){
        if(heighest < arr[i]){
            heighest = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i] < heighest && SH < arr[i]){
           SH = arr[i];
        }
    }
    printf("The Second Heighest element is: %d\n",SH);

return n;
}

int main(){
    int arr[100] = {1,2,3,4,5,6,7,8};
    int n=8;

    n = SecondLargetst(arr,n);

    printf("The final Array is: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

return 0;
}