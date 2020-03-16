#include <stdio.h>

int main()
{
    int number;
    int *p;

    printf("Enter value of number: \n");
    scanf("%d", &number);
    printf("Enter value of p: \n");
    scanf("%d", &p);

    printf("Number= %d, &number= %p, p= %d, &p= %p, *p= %d", number, &number, p, &p, *p);
    return 0;
}
