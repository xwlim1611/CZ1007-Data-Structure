#include <stdio.h>
int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);
int main()
{
    int x,y,result=-1;
    printf("Enter 2 numbers: \n");
    scanf("%d %d", &x, &y);
    printf("gcd1(): %d\n", gcd1(x, y));
    gcd2(x,y,&result);
    printf("gcd2(): %d\n", result);
    return 0;
}
int gcd1(int num1, int num2)
{
    int gcd = 1;
    int i = 1;
    //num1 = (num1 > 0)? num1 : -num1;
    //num2 = (num2 > 0)? num2 : -num2;

    for (i ; i <= num1 && i <= num2; ++i)
    {
        if (num1 % i == 0 && num2 % i== 0)
            gcd = i;
    }
    return gcd;

}
void gcd2(int num1, int num2, int *result)
{
    int gcd = 1;
    int i = 1;
    //num1 = (num1 > 0)? num1 : -num1;
    //num2 = (num2 > 0)? num2 : -num2;

    for (i ; i <= num1 && i <= num2; ++i)
    {
        if (num1 % i == 0 && num2 % i== 0)
            gcd = i;
    }
    *result = gcd;
}
