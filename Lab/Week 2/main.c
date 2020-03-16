#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studentNumber = 0, mark;
    char Grade;
    printf("Enter Student ID: \n");
    scanf("%d", &studentNumber);

    while (studentNumber != -1)
    {
        printf("Enter Mark: \n");
        scanf("%d", &mark);

        if (mark >= 75)
            Grade = 'A';
        else if (mark >= 65)
            Grade = 'B';
        else if (mark >= 55)
            Grade = 'C';
        else if (mark >= 45)
            Grade = 'D';
        else
            Grade = 'F';

        switch (Grade) {
        case 'A':
            printf("Grade = A \n");
            break;

        case 'B':
            printf("Grade = B \n");
            break;

        case 'C':
            printf("Grade = C \n");
            break;

        case 'D':
            printf("Grade = D \n");
            break;

        case 'F':
            printf("Grade = F \n");
            break;
        }
        printf("Enter Student ID: \n");
        scanf("%d", &studentNumber);

    }
    return 0;
}
