#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("maxCharToFront(): ");

     maxCharToFront(str);
     puts(str);
     return 0;
}
void maxCharToFront(char *str)
{
    int i, j, temp = 0;
    char temporary;
    for (i = 0; i < strlen(str); i++)
    {
        if (*(str+temp) < *(str+i))
        {
            temp = i;
        }
    }
    temporary = str[temp];
    for (j = temp; j >= 0 ; j--)
    {
        *(str+j) = *(str+j-1);
    }
    *str = temporary;
}
