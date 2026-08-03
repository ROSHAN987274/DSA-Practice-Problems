/*
2.Find the length (size) of an array entered by the user.
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

    printf("\n");
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("The size of the array is: %d",n);


return 0;
}
