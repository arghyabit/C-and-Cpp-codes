#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a chracter to check it's a vowel or not:");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a':case 'A':
    case 'e':case 'E':
    case 'i':case 'I':
    case 'o':case 'O':
    case 'u':case 'U':
        printf("It's a vowel.....");
        break;
    
    default:
        printf("It's a consonant.....");
        
    }
    return 0;
}