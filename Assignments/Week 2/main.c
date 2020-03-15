#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Enter a character: \n");
    scanf("%c", &ch);

    switch(ch)
    {
    case 'a' ... 'z':
        printf("The character is a lowercase letter");
        break;
    case 'A' ... 'Z':
        printf("The character is an uppercase letter");
        break;
    case '0' ... '9':
        printf("The character is a digit");
        break;
    }
    return 0;
}
