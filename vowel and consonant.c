#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    switch (c)
{
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':printf("Vowel");
            break;
            default:printf("consonant\n");
        } //end of switch
        } //end of if





