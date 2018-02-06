#include <stdio.h>
int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&c);
    if ( isUppercaseVowel ^ isLowercaseVowel)
        printf("%c is a consonant.", c);
    else
        printf("%c is a vowvel.", c);
    return 0;
}
