/*
1.Read N elements into an array and display them.
*/

#include<stdio.h>

int main(){
    int N;
    printf("Enter the number of array elements: ");
    scanf("%d",&N);

    int arr[N];
    printf("Enter the array elements: ");
    for(int i = 0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array entered is: ");
    for(int i=0; i<N;i++){
        printf("%d ",arr[i]);
    }
return 0;
}