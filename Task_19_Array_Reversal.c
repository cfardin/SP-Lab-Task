#include<stdio.h>

int main(){
    int n, arr[n];
    scanf("%d", &n); // number of elements in array
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=n-1; i>=0; i--){
           printf("%d ", arr[i]);
    }
    return 0;
}
