#include <stdio.h>
int platform1D(int ar[], int size);
int main()
{
    int i,b[50],size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",&b[i]);
    printf("platform1D(): %d\n", platform1D(b,size));
    return 0;
}
int platform1D(int ar[], int size)
{
    int i, total, number;
    int count = 0;
    number = ar[0];

    for (i=0; i < size; i++)
    {
        if (number == ar[i])
        {
            count ++;
        }
        else if (number != ar[i])
        {
            if (count > total)
                total = count;
            count = 1;
            number = ar[i];
        }
    }
    count = (total > count)? total : count;
    return count;
}
