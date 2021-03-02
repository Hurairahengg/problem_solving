#include <stdio.h>

void main()
{
    char ch;

    printf("Enter a Letter: ");
    scanf("%c", &ch);//Write down Your letter

    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')//is it vowel?
    {
        printf("%c is vowel\n", ch);//print if it is vowel..
    }
    else //if it is consonant,,,
    {
        printf("%c is consonant\n", ch);//print it...
    }
}
//Thanks!
