/*
6.Search for a given element using Linear Search and display its position.
*/

int main(){
    int n;
    printf("Enter the number of the array element:");
    
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("The array elements we have are: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    int target;

    printf("From the above array elements choose the one which position you want to know: \n");
    scanf("%d",&target);

    int result = LinearSearch(arr,n,target);

    if(result == -1){
        printf("Element not found.");
    }else{
        printf("Element found at %d",result);
    }
return 0;
}

int LinearSearch(int arr[],int n,int target){
     for(int i=0; i<n; i++){
        if(target == arr[i]){
            return i;
        }
    }
return -1;
}