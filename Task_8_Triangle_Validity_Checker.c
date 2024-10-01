#include <stdio.h>

int is_t(int x, int y, int z){
    if((x+y <= z) || (x+z <= y) || (y+z <= x))
        return 0;
    return 1;  
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(is_t(a, b, c)==1)
        printf("It is a Triangle\n");
    else printf("It is Not a Triangle\n");
    return 0;
}
