/*
10.Delete an element from a specified position in an array.
*/

#include<stdio.h>

int Delete(int arr[],int n,int pos){

    for(int i= pos-1; i<n; i++){
        arr[i] = arr[i+1];
    }
    n--;

return n;
}

int main(){
    int arr[100]={1,2,3,4,5};
    int n=5;

    n = Delete(arr,n,3);

    printf("The final Array is: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

return 0;
}