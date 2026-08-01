/*
3.Count the number of occurrences of a given value in an array.
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
    
    int count=0;
    int target;
    printf("Enter the number you want to find the number of occurance of: ");
    scanf("%d",&target);
    for(int i=0; i<N;i++){
        printf("%d ",arr[i]);

        if(target == arr[i]){
            count++;
        }
    }
    printf("\n");

    printf("The number of occurance of %d is: %d",target,count);


return 0;
}