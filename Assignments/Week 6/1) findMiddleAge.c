#include <stdio.h>
typedef struct {
    char name[20];
    int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);
int main()
{
    Person man[3], middle;

    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
    return 0;
}
void readData(Person *p)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter person %d: \n", (i+1));
        scanf("%s %d", p[i].name, &p[i].age);
    }
}
Person findMiddleAge(Person *p)
{
    int i, max, min;
    max = 2;
    min = 0;
    for(i = 0; i < 3; i++)
    {
        if (p[i].age > p[max].age)
            max = i;
        if (p[i].age < p[min].age)
            min = i;
    }
    for(i = 0; i < 3; i++)
    {
        if (p[i].age < p[max].age && p[i].age > p[min].age)
        {
            return p[i];
        }
    }
}
