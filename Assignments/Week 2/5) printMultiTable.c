#include <stdio.h>
int main()
{
 int row, col;
 int i, input;
 printf("Enter an input number (between 1 and 9): \n");
 scanf("%d", &input);
 printf("Multiplication Table: \n");
 /* Write your code here */
 printf("\t");
 for (i=1; i<=input; i++)
     printf("%d\t", i);
 printf("\n");
 for (row=1; row<=input; row++)
 {
     printf("%d\t", row);
     for (col = 1; col<=row; col++)
        printf("%d\t", col*row);
     printf("\n");
 }

 return 0;
}
