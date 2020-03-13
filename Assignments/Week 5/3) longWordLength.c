#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()
{
 char str[80], *p;

 printf("Enter a string: \n");
 fgets(str, 80, stdin);
 if (p=strchr(str,'\n')) *p = '\0';
 printf("longWordLength(): %d\n", longWordLength(str));
 return 0;
}
int longWordLength(char *s)
{
    int i, temp = 0, count = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if ((s[i] != ' ') && (isalpha(s[i])))
        {
            count += 1;
        }
        else
        {
            if (count > temp)
                temp = count;
            count = 0;
        }
    }
    return temp;
}
