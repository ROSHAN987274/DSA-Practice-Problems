/*
5.Calculate the sum and average of all elements in an array.
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

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    
    float avg = sum/2;

    printf("Sum is: %d\n",sum);
    printf("Average is: %.2f",avg);

return 0;
}