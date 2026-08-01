/*
Insert an element at a specified position in an array.
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of the array element: ");
    scanf("%d",&n);
    int arr[100];
    printf("Enter the array elements: ");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    n = Insert(arr,n,2,10);

    printf("The original array is: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

return 0;
}

int Insert(int arr[],int n,int k,int value){

    for(int i=n; i>= k; i--){
        arr[i] = arr[i-1];
    }
    arr[k-1]=value;
    n++;
return n;
}