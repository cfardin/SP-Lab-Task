#include <stdio.h>

int main() {
int n;
scanf("%d", &n);
switch (n/10){
    case 9 :
        printf("Your grade is A");
        break;
    case 7 :
        printf("Your grade is B");
        break ;
    case 6 :
         printf("Your grade is C");
         break;
    case 5 :
        printf("Your grade is D");
        break ;
    case 4 :
        printf("Your grade is E");
        break;

    default :
        if( 0 < n > 40) printf("Your grade is F\\n");
        else if(n == 100) printf("Your grade is A\\n");
        else printf("Invalid Entry\\n");

}

return 0;
}
