#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
    int power;
    float number, result=-1;

    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    printf("power1(): %.2f\n", power1(number, power));
    power2(number,power,&result);
    printf("power2(): %.2f\n", result);
    return 0;
}
float power1(float num, int p)
{
    float finalvalue = num;
    if (p > 0)
    {
        for (p; p > 1; p--)
        {
            finalvalue *= num;
        }
        return finalvalue;
    }
    else if (p < 0)
    {
        for (p; p < 1; p++)
        {
            finalvalue /= num;
        }
        return finalvalue;
    }
    else if (p == 0)
    {
        finalvalue = 1;
        return finalvalue;
    }

}
void power2(float num, int p, float *result)
{
    float finalvalue = num;
    if (p > 0)
    {
        for (p; p > 1; p--)
        {
            finalvalue *= num;
        }
        *result = finalvalue;
    }
    else if (p < 0)
    {
        for (p; p < 1; p++)
        {
            finalvalue /= num;
        }
        *result = finalvalue;
    }
    else if (p == 0)
    {
        finalvalue = 1;
        *result = finalvalue;
    }
}
