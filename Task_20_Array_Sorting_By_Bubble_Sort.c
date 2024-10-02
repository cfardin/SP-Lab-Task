#include<stdio.h>
int main(){
    int arr[] = {5, 20, 7, 33, 12, 3, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }       
    for(int i=0; i<size; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
    printf("\nShorted array: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0; 
}
