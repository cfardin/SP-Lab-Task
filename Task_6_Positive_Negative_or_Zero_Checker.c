#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    if(n>0) printf("%d is a Positive number\n", n);
    else if(n == 0) printf("%d is Zero\n", n);
    else printf("%d is a Negative number\n", n);
    return 0;   
}

