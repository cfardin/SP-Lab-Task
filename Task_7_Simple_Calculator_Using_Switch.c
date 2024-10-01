#include <stdio.h>

int main()
{
    int a, b;
    char c;
    printf("Enter 1st number, operator the and 2nd number: \n");
    scanf("%d %c %d", &a, &c, &b);
    
    switch ( c ) {
    case '+': printf("%d", a+b);
    break;
    case '-': printf("%d", a-b);
    break;
    case '*': printf("%d", a*b);
    break;
    case '/': printf("%.2f", (float)a/b);w
    break;
    default: printf("Invalid Entry\n");
    }
    return 0;
}
