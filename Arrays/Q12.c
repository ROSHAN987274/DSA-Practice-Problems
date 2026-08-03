/*
12.Count the number of positive, negative, and zero elements.
*/
#include<stdio.h>

int main(){
    int arr[100] = {0,0,1,2,-1,-2,3,2,0};
    int n =7;

    int P = 0;
    int N = 0;
    int Z = 0;

    for(int i=0; i<n; i++){
        if(arr[i]<0){
            N++;
        }else if(arr[i] == 0){
            Z++;
        }else{
            P++;
        }
    }
    printf("%d\n",P);
    printf("%d\n",N);
    printf("%d\n",Z);

}