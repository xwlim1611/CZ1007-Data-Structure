#include <stdio.h>
#include <string.h>
#define INIT_VALUE 999
int findSubstring(char *str, char *substr);
int main()
{
    char str[40], substr[40], *p;
    int result = INIT_VALUE;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("Enter the substring: \n");
    fgets(substr, 80, stdin);
    if (p=strchr(substr,'\n')) *p = '\0';
    result = findSubstring(str, substr);
    if (result == 1)
        printf("findSubstring(): Is a substring\n");
    else if ( result == 0)
        printf("findSubstring(): Not a substring\n");
    else
        printf("findSubstring(): An error\n");
    return 0;
}
int findSubstring(char *str, char *substr)
{
    int i, j, lenstr, lensub;

    i = 0;
    lenstr = 0;
    while (*(str+i) != '\0')
    {
        lenstr++;
        i++;
    }
    j = 0;
    lensub = 0;
    while (*(substr+j) != '\0')
    {
        lensub++;
        j++;
    }

    for (i = 0; i < lenstr; i++)
    {
       if (*(str+i) == *(substr))
       {
           j=1;
           while (j < lensub)
           {
               if (*(str+i+j) != *(substr+j))
                break;
               else
                j++;
           }
           if (j == lensub)
            return 1;
       }
    }
    return 0;
}
