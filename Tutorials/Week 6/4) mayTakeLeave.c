#include <stdio.h>
#define INIT_VALUE 1000
typedef struct {
    int id; /* staff identifier */
    int totalLeave; /* the total number of days of leave allowed */
    int leaveTaken; /* the number of days of leave taken so far */
} leaveRecord;
int mayTakeLeave(leaveRecord list[], int id, int leave, int n);
void getInput(leaveRecord list[], int *n);
void printList(leaveRecord list[], int n);
int main()
{
    leaveRecord listRec[10];
    int len;
    int id, leave, canTake=INIT_VALUE;
    int choice;

    printf("Select one of the following options: \n");
    printf("1: getInput()\n");
    printf("2: printList()\n");
    printf("3: mayTakeLeave()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                getInput(listRec, &len);
                printList(listRec, len);
                break;
            case 2:
                printList(listRec, len);
                break;
            case 3:
                printf("Please input id, leave to be taken: \n");
                scanf("%d %d", &id, &leave);
                canTake = mayTakeLeave(listRec, id, leave, len);
                if (canTake == 1)
                    printf("The staff %d can take leave\n", id);
                else if (canTake == 0)
                    printf("The staff %d cannot take leave\n", id);
                else if (canTake == -1)
                    printf("The staff %d is not in the list\n", id);
                else
                    printf("Error!");
                break;
            }
        } while (choice < 4);
        return 0;
}
void printList(leaveRecord list[], int n)
{
    int p;

    printf("The staff list:\n");
    for (p = 0; p < n; p++)
        printf ("id = %d, totalleave = %d, leave taken = %d\n",
            list[p].id, list[p].totalLeave, list[p].leaveTaken);
}
void getInput(leaveRecord list[], int *n)
{
    int number;
    *n = 0;
    printf("Enter the number of staff records: \n");
    scanf("%d", &number);
    while ((*n) != number)
    {
        printf("Enter id, totalleave, leavetaken: \n");
        scanf("%d %d %d", &list[*n].id, &list[*n].totalLeave, &list[*n].leaveTaken);
        (*n)++;
    }
}
int mayTakeLeave(leaveRecord list[], int id, int leave, int n)
{
    int p;

    for (p = 0; p < n; p++)
    {
        if (list[p].id == id)
            if (list[p].totalLeave >= list[p].leaveTaken + leave)
                return 1;
            else if (list[p].totalLeave < list[p].leaveTaken + leave)
                return 0;
    }
    return -1;
}
