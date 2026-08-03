/*
17.Remove duplicate elements from an array.
*/

#include<stdio.h>

int main(){
    int arr[] ={1,2,3,4,5,6,7,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The new array is: ");
    for(int i=0; i<n; i++){
        int duplicate = 0;

        for(int j=0; j<i; j++){
            if(arr[j] == arr[i]){
                duplicate = 1;
                break;
            }
        }
        

    if(!duplicate){
        printf("%d ",arr[i]);
    }
    
    }
    
return 0;
}