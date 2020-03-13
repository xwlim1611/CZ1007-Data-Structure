#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1
int countSubstring(char str[], char substr[]);
int main()
{
    char str[80], substr[80], *p;
    int result=INIT_VALUE;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("Enter the substring: \n");
    fgets(substr, 80, stdin);
    if (p=strchr(substr,'\n')) *p = '\0';
    result = countSubstring(str, substr);
    printf("countSubstring(): %d\n", result);
    return 0;
}

int countSubstring(char str[], char substr[])
{
    int i, j, count = 0;
    int len;
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        j = 0;
        if (str[i] == substr[j])
        {
            for (j = 0; j < strlen(substr); j++)
            {
                if (str[i+j] != substr[j])
                    break;
            }
            if (j == strlen(substr))
                count++;
        }

    }

    return count;
}
