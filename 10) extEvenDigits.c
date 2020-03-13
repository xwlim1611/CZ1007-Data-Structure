#include <stdio.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
    int number, result = INIT_VALUE;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
    extEvenDigits2(number, &result);
    printf("extEvenDigits2(): %d\n", result);
    return 0;
}
int extEvenDigits1(int num)
{
    int digit= 0;
    int posi = 0;
    int r = 0;
    int multiply = 1;
    while (num > 0)
    {
        digit = num % 10;
        num = num / 10;
        if (digit % 2 == 0)
        {
            posi += 1;
            for (int i = 1; i < posi; i++)
            {
                multiply = multiply * 10;
            }
            r = r + digit*multiply;
        }
        multiply = 1;
    }
    if (r == 0)
    {
        return -1;
    }
    else
    {
        return r;
    }

}
void extEvenDigits2(int num, int *result)
{
    int digit= 0;
    int posi = 0;
    int r = 0;
    int multiply = 1;
    while (num > 0)
    {
        digit = num % 10;
        num = num / 10;
        if (digit % 2 == 0)
        {
            posi += 1;
            for (int i = 1; i < posi; i++)
            {
                multiply = multiply * 10;
            }
            r = r + digit*multiply;
        }
        multiply = 1;
    }
    if (r == 0)
    {
        *result = -1;
    }
    else
    {
        *result = r;
    }

}
