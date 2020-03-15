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
 /* Write your code here */
 int i;
 float total = 1;
 if (p > 0)
 {
     for(i=0; i<p; i++)
         total *= num;
     return total;
 }
 else if (p < 0)
 {
    for (i=0; i>p; i--)
        total *= (1/num);
    return total;
 }
 else if (p == 0)
    return 1;
}
void power2(float num, int p, float *result)
{
 /* Write your code here */
 int i;
 float total;
 total = 1;
 if (p > 0)
 {
     for(i=0; i<p; i++)
         total *= num;
     *result = total;
 }
 else if (p < 0)
 {
    for (i=0; i>p; i--)
    {
        total *= (1/num);
    }
    *result = total;
 }
 else if (p == 0)
    *result = 1;
}
