#include<stdio.h>
int p(int x){
    if(x<=1) return 0;
    for(int i = 2; i * i <= x; i++){
        if(x%i==0) return 0;
    } return 1;
}   
 
int main()
{
    int n;
    scanf("%d", &n);
    if(p(n)==1) printf("%d is a Prime number\n", n);
    else printf("%d is not a Prime number\n", n);
    
    return 0;
}

