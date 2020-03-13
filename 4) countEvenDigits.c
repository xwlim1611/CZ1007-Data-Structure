#include <stdio.h>
int countEvenDigits1(int number);
void countEvenDigits2(int number, int *count);
int main()
{
    int number, result;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("countEvenDigits1(): %d\n", countEvenDigits1(number));
    countEvenDigits2(number, &result);
    printf("countEvenDigits2(): %d\n", result);
    return 0;
}
int countEvenDigits1(int number)
{
    int counter = 0;
    int num = 0;
    while (number > 0)
    {
        num = number % 10;
        if (num % 2 == 0)
        {
            counter++;
        }
        num = 0;
        number/=10;
    }
    return counter;
}
void countEvenDigits2(int number, int *count)
{
    int counter = 0;
    int num = 0;
    while (number > 0)
    {
        num = number % 10;
        if (num % 2 == 0)
        {
            counter++;
        }
        num = 0;
        number/=10;
    }
    *count = counter;
}
