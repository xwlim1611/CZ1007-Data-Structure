#include <stdio.h>
#define INIT_VALUE 999
int rAllEvenDigits1(int num);
void rAllEvenDigits2(int num, int *result);
int main()
{
    int number, result=INIT_VALUE;

    printf("Enter a number: \n");
    scanf("%d", &number);
    result = rAllEvenDigits1(number);
    if (result == 1)
        printf("rAllEvenDigits1(): yes\n");
    else if (result == 0)
        printf("rAllEvenDigits1(): no\n");
    else
        printf("rAllevenDigits1(): error\n");
    result=INIT_VALUE;
    rAllEvenDigits2(number, &result);
    if (result == 1)
        printf("rAllEvenDigits2(): yes\n");
    else if (result == 0)
        printf("rAllEvenDigits2(): no\n");
    else
        printf("rAllevenDigits2(): error\n");
    return 0;
}
int rAllEvenDigits1(int num)
{
    if (num < 10)
    {
        if (num%2 == 0)
            return 1;
        else
            return 0;
    }
    else
    {
        if (num%2 == 0)
            return 1 * rAllEvenDigits1(num/10);
        else
            return 0;
    }

/*  if (num == 0) {
        return 1;
    }

    if (num%2 == 1)
        return 0;

    if (rAllEvenDigits1(num/10) == 0)
        return 0;

    return 1; */
}
void rAllEvenDigits2(int num, int *result)
{
    if (num < 10)
    {
        if (num%2 == 0)
            *result = 1;
        else
            *result = 0;
    }
    else
    {
        if (num%2 == 0)
        {
            rAllEvenDigits2(num/10, result);
            *result *= 1;
        }
        else
            *result = 0;
    }

 /* if (num == 0) {
        *result = 1;
        return;
    }

    if (num%2 == 1) {
        *result = 0;
        return;
    }

    rAllEvenDigits2(num/10, result); */
}
