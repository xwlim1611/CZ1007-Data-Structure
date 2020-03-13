#include <stdio.h>
#include <string.h>
void insertChar(char *str1, char *str2, char ch);
int main()
{
    char a[80],b[80];
    char ch, *p;

    printf("Enter a string: \n");
    fgets(a, 80, stdin);
    if (p=strchr(a,'\n')) *p = '\0';
    printf("Enter a character to be inserted: \n");
    ch = getchar();
    insertChar(a,b,ch);
    printf("insertChar(): ");
    puts(b);
    return 0;
}
void insertChar(char *str1, char *str2, char ch)
{
   /* int i, j;
    i = 0;
    j = 0;
    while (str1[i] != '\0')
    {
        if (i % 3 == 0 && i != 0)
        {
            str2[i+j] = ch;
            str2[i+j+1] = str1[i];
            j++;
        }
        else
        {
            str2[i+j] = str1[i];
        }
        i++;
    }
    */
     int count=0;

     while(*str1 != '\0')
     {
         *str2++ = *str1++;
         ++count;

         if(count == 3)
         {
             *str2++ = ch;
             count = 0;
         }
     }

     *str2 = '\0';
}
