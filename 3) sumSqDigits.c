#include <stdio.h>
int sumSqDigits1(int num);
void sumSqDigits2(int num, int *result);
int main()
{
    int num, result;

    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
    sumSqDigits2(num, &result);
    printf("sumSqDigits2(): %d\n", result);
    return 0;
}
int sumSqDigits1(int num)
{
    int total = 0, digit;
    while (num != 0)
    {
        digit = num % 10;
        total = total + (digit * digit);
        num /= 10;
    }
    return total;
}
void sumSqDigits2(int num, int *result)
{
    int total = 0, digit;
    while (num != 0)
    {
        digit = num % 10;
        total = total + (digit * digit);
        num /= 10;
    }
    *result = total;
}
