#include <stdio.h>
#include <string.h>
char *sweepSpace1(char *str);
char *sweepSpace2(char *str);
int main()
{
    char str[80], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str));
    return 0;
}
char *sweepSpace1(char *str)
{
    int i, j, len;

    i=0; len=0;
    while (str[i]!='\0'){
        len++;
        i++;
    }
    j = 0;
    for (i=0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0'; // add a null character
    return str;
}
char *sweepSpace2(char *str)
{
    int i, j, len;

    i = 0; len = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }

    j = 0;
    for (i = 0; i < len; i ++)
    {
        if (*(str+i) != ' ')
        {
            *(str+j) = *(str+i);
            j++;
        }
    }
    *(str+j) = '\0';
    return str;
}
