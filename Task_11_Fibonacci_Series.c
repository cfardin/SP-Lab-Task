#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num1 = 0, num2 = 1;
    printf("%d %d ", num1, num2);
    for(int i = 3; i<=n; i++){
        int next = num1 + num2;
        printf("%d ", next);
        num1 = num2 ;
        num2 = next;
    }
    
    return 0;
}
