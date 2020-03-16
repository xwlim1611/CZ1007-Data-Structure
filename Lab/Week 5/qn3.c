#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1000
int palindrome(char *str);
int main()
{
    char str[80], *p;
    int result = INIT_VALUE;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    result = palindrome(str);
    if (result == 1)
        printf("palindrome(): A palindrome\n");
    else if (result == 0)
        printf("palindrome(): Not a palindrome\n");
    else
        printf("An error\n");
    return 0;
}
int palindrome(char *str)
{
    int i = 0, len = 0;
    while (str[i] != '\0')
    {
        i++;
        len++;
    }
    //printf("%d", len);
    int j, k, w=0;
    for (j = 0; j < (len/2); j++)
    {
        k = len-j-1;
        if (str[j] != str[k])
            break;
        else
            w++;
    }
    if (w == len/2)
        return 1;
    else
        return 0;
}
