#include<stdio.h>

int main(){
    int n, arr[n], max =0;
    scanf("%d", &n); // number of elements in array
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("Maximum element in the array is : %d", max);
    
    return 0;
}
