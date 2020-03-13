#include <stdio.h>
void specialNumbers1D(int ar[], int num, int *size);
int main()
{
    int a[20],i,size=0,num;

    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    specialNumbers1D(a, num, &size);
    printf("specialNumbers1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",a[i]);
    return 0;
}
void specialNumbers1D(int ar[], int num, int *size)
{
    int i, j, number;
    //int total = 0;
    *size = 0;
    for (i=100; i < num; i++)
    {
        number = i;
        int total = 0;
        for (j=0; j < 3; j++)
        {
             total += (number%10) * (number%10) * (number%10);
             number /= 10;
        }
        if (total == i)
        {
            ar[*size] = i;
            *size += 1;
        }
    }
}
