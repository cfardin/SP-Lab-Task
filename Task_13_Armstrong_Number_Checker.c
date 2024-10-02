#include<stdio.h>
#include<math.h>
int dig(int x)
{
    int count = 0;
    
    while(x!=0){
        x/= 10;
        count ++;
    }
    return count;
}

int main(){
    int n, result =0, b, a, i;
    scanf("%d", &n);
    i = dig(n);
    a = n;
    while(a!=0){
        b = a%10;
        result += pow(b, i);
        a/=10;
    }
    if(result==n)
        printf("%d is a Armstrong number.", n);
    else printf("%d is not a Armstrong number.", n);    
    
    return 0;
}
