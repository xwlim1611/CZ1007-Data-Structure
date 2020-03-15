#include <stdio.h>
int allEvenDigits1(int num);
void allEvenDigits2(int num, int *result);
int main()
{
 int number, p=999, result=999;
 printf("Enter a number: \n");
 scanf("%d", &number);
 p = allEvenDigits1(number);
 if (p == 1)
 printf("allEvenDigits1(): yes\n");
 else if (p == 0)
 printf("allEvenDigits1(): no\n");
 else
 printf("allEvenDigits1(): error\n");
 allEvenDigits2(number, &result);
 if (result == 1)
 printf("allEvenDigits2(): yes\n");
 else if (result == 0)
 printf("allEvenDigits2(): no\n");
 else
 printf("allEvenDigits2(): error\n");
 return 0;
}
int allEvenDigits1(int num)
{
/* write code here */
    int digit, count;
    count = 1;
    if (num == 0)
        return 1;
    else if (num > 0)
    {
        while (num > 0)
        {
            digit = num%10;
            if (digit%2 != 0)
                count = 0;
            num /= 10;
        }
    }
    if (count == 1)
        return 1;
    else if (count == 0)
        return 0;
}
void allEvenDigits2(int num, int *result)
{
/* write code here */
    int digit, count;
    count = 1;
    if (num == 0)
        *result = 1;
    else if (num > 0)
    {
        while (num > 0)
        {
            digit = num%10;
            if (digit%2 != 0)
                count = 0;
            num /= 10;
        }
    }
    if (count == 1)
        *result = 1;
    else if (count == 0)
        *result = 0;
}
