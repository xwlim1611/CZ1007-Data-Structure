#include <stdio.h>
#include <string.h>
typedef struct {
    char title[80];
    char lastname[80];
    char firstname[80];
    char publisher[80];
} Booktype;
void readBook(Booktype *book);
void printBook(Booktype book);
int main()
{
    Booktype book;

    readBook(&book);
    printf("The book information: \n");
    printBook(book);
}
void readBook(Booktype *book)
{
    char *p;

    printf("Enter the title of the book: \n");
    fgets((*book).title, 80, stdin);
    if (p = strchr((*book).title, '\n'))
        {
            *p = '\0';
        }
    printf("Enter the author first name: \n");
    fgets((*book).firstname, 80, stdin);
    if (p = strchr((*book).firstname, '\n'))
        {
            *p = '\0';
        }
    printf("Enter the author last name: \n");
    fgets((*book).lastname, 80, stdin);
    if (p = strchr((*book).lastname, '\n'))
    {
        *p = '\0';
    }
    printf("Enter the publisher name: \n");
    fgets((*book).publisher, 80, stdin);
    if (p = strchr((*book).publisher, '\n'))
    {
        *p = '\0';
    }
}
void printBook(Booktype book)
{
    printf("Title: %s \n", book.title);
    printf("Author: %s %s \n", book.firstname, book.lastname);
    printf("Publisher: %s \n", book.publisher);
}
