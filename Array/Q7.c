/*
7. Reverse the elements of an array.
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

    printf("The original array is:");
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }

    printf("\n");

    printf("The Reversed array is: ");
    for(int i=n-1; i>=0; i--){
        printf("%d",arr[i]);
    }


return 0;
}