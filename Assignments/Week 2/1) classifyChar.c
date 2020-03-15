#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: \n");
    scanf("%c", &ch);
/* Write your program code here */
    if (ch >= 'A' && ch <= 'Z')
        printf("Upper case letter");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lower case letter");
    else if (ch >= '0' && ch <= '9')
        printf("Digit");


    return 0;
}
