#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a=1;
    int fac = 1;
    while(a<=n){
       fac*=a;
       a++;
    }
    printf("%d", fac);
    
    return 0;
}
