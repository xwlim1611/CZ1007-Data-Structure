#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a1, a2, b1, b2;
    float c1, c2;
    float x, y;
    float deno;

    printf("Enter the value for a1, b1, c1, a2, b2, c2 \n");
    scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);

    deno = (a1*b2)-(a2*b1);

    if (deno != 0) {
        x = ((b2*c1)-(b1*c2))/(deno);
        printf("%f \n", x);
        y = ((a1*c2)-(a2*c1))/(deno);
        printf("%f \n", y);
    }
    else
        printf("Unable to compute because the denominator is zero \n");


    return 0;
}
