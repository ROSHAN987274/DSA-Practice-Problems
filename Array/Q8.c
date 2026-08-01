/*
8.Count the number of even and odd elements in an array.
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
        printf("%d ",arr[i]);
    }

    printf("\n");

    int EvenCount = 0;
    int OddCount = 0;

    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0){
            EvenCount++;
        }else{
            OddCount++;
        }
    }
    
    printf("The even number count is: %d\n",EvenCount);
    printf("The odd number count is: %d\n",OddCount);


return 0; 
}