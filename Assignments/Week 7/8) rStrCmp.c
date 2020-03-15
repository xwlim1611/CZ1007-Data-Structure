#include <stdio.h>
#include <string.h>
#define INIT_VALUE 100
int rStrcmp(char *s1, char *s2);
int main()
{
    char source[40], target[40], *p;
    int result = INIT_VALUE;

    printf("Enter a source string: \n");
    fgets(source, 40, stdin);
    if (p=strchr(source,'\n')) *p = '\0';
    printf("Enter a target string: \n");
    fgets(target, 40, stdin);
    if (p=strchr(target,'\n')) *p = '\0';
    result = rStrcmp(source, target);
    printf("rStrcmp(): %d", result);
    return 0;
}
int rStrcmp(char *s1, char *s2)
{
    if (*s1 > *s2)
        return 1;
    else if (*s1 < *s2)
        return -1;
    else if (*s1 == *s2)
    {
        if (*s1 == '\0' && *s2 == '\0')
            return 0;
        else
            return rStrcmp(s1+1, s2+1);
    }
}
