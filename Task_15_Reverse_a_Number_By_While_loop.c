#include<stdio.h>

int main()
{
    int n, num;
    int rev = 0;
    scanf("%d", &n);
    
    while(n!=0){
        num = n%10;
        rev = rev * 10 + num;
        n/= 10;
    }
    printf("%d", rev);
    return 0;
}

