#include <stdio.h>
int main()
{
    int hours;
    float tax, grossPay, netPay;

    printf("Enter hours of work: \n");
    scanf("%d", &hours);

 /* Write your program code here */
    if (hours <= 40)
        grossPay = 6*hours;
    else if (hours > 40)
        grossPay = 6*40 + (hours-40)*6*1.5;

    if (grossPay <= 1000)
        tax = 0.1*grossPay;
    else if (grossPay > 1000 && grossPay <= 1500)
        tax = 0.1*1000 + (grossPay-1000)*0.2;
    else if (grossPay > 1500)
        tax = 0.1*1000 + 500*0.2 + (grossPay-1500)*0.3;

    netPay = grossPay - tax;

    printf("Gross pay = %.2f\n", grossPay);
    printf("Tax = %.2f\n", tax);
    printf("Net pay = %.2f\n", netPay);
    return 0;
}
