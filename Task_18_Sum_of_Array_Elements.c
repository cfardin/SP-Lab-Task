#include<stdio.h>

int main(){
    int n, arr[n], max =0;
    scanf("%d", &n); // number of elements in array
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
            max += arr[i];
        
    }
    printf("Total sum: %d", max);
    
    return 0;
}
