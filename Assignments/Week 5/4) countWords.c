#include <stdio.h>
#include <string.h>
int countWords(char *s);
int main()
{
    char str[50], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("countWords(): %d", countWords(str));
    return 0;
}
int countWords(char *s)
{
    int i, len, count;
    count = 0;
    len = strlen(s);
    if (s[0] != '\0')
    {
        for (i = 0; i < len; i++)
        {
            if (s[i] == ' ')
        {
            count++;
        }
        }
        count = count + 1;
        return count;
    }
    else
        return count;
}
