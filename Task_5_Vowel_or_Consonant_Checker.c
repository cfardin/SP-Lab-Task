#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    char s = tolower(n);
    switch(s){
    case 'a':
        printf("%c is a vowel\n", n);
        break;
    case 'e':
        printf("%c is a vowel\n", n);
        break;
    case 'i':
        printf("%c is a vowel\n", n);
        break;
    case 'o':
        printf("%c is a vowel\n", n);
        break;
    case 'u':
        printf("%c is a vowel\n", n);
        break;
    default : 
        printf("%c is a consonant\n", n);
    }    
    return 0; 
}
