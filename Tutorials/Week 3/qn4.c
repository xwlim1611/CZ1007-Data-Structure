#include <stdio.h>
#include <math.h>
void inputXY(double *x1, double *y1, double *x2, double *y2);
void outputResult(double dist);
double calDistance1(double x1, double y1, double x2, double y2);
void calDistance2(double x1, double y1, double x2, double y2, double *dist);
int main()
{
    double x1, y1, x2, y2, distance = -1;

    inputXY(&x1, &y1, &x2, &y2);
    distance = calDistance1(x1, y1, x2, y2);
    printf("calDistance1(): ");
    outputResult(distance);
    calDistance2(x1, y1, x2, y2, &distance);
    printf("\ncalDistance2(): ");
    outputResult(distance);
    return 0;
}

void inputXY(double *x1, double *y1, double *x2, double *y2)
{
    printf("Input x1 y1 x2 y2: \n");
    scanf("%lf %lf %lf %lf", x1, y1, x2, y2);
}

void outputResult(double dist)
{
    printf("%.2f", dist);
}

double calDistance1(double x1, double y1, double x2, double y2)
{
    x1 = x2 - x1;
    x1 = x1*x1;
    y1 = y2 - y1;
    y1 = y1*y1;
    return (sqrt(x1 + y1));
}

void calDistance2(double x1, double y1, double x2, double y2, double *dist)
{
    double x, y;
    x = x2 - x1;
    x = x*x;
    y = y2 - y1;
    y = y*y;
    *dist = sqrt(x + y);
}



