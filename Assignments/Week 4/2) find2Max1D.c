#include <stdio.h>
void find2Max1D(int ar[], int size, int *max1, int *max2);
int main()
{
    int max1,max2;
    int ar[10],size,i;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d", &ar[i]);
    find2Max1D(ar,size,&max1,&max2);
    printf("Max1: %d\nMax2: %d\n",max1,max2);
    return 0;
}
void find2Max1D(int ar[], int size, int *max1, int *max2)
{
    int i,j;
    int min = ar[0];
    for (j=0; j < size; j++)
    {
        if (ar[j] < min)
            min = ar[j];
    }
    //printf("%d \n", min);

    *max1 = min;
    *max2 = min;
    for (i=0; i < size; i++)
    {
        if (ar[i] > *max1)
        {
            *max2 = *max1;
            *max1 = ar[i];
        }
        if (ar[i] > *max2 && ar[i] != *max1)
        {
            *max2 = ar[i];
        }
    }
}
