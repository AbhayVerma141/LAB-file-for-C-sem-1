//Create a Book structure containing book_id, title, author name and price. Write a C program to pass a structure as a function argument and print the book details. 
#include<stdio.h>
struct book
{
    int id;
    char title[50];
    char author[50];
    int price;
};

int main()
{
    int n;
    printf("how many book you want to print = ");
    scanf("%d", &n);
    struct book b[n];
    for(int i = 0; i < n ; i++)
    {
        printf("__BOOK NO.%d__\n", i+1);

        printf(" enter the book id = ");
        scanf("%d", &b[i].id);

        printf(" enter the book title = ");
        scanf("%s", b[i].title);

        printf(" enter the book author name = ");
        scanf("%s", b[i].author);

        printf(" enter the book price = ");
        scanf("%d", &b[i].price);
    }
    printf(" ________________________BOOK DETAILS_______________________ \n");
    for(int i = 0; i < n ; i++)
    {
        printf("BOOK ID - %d   BOOK TITLE - %s   BOOK AUTHOR - %s   BOOK PRICE - %d\n",
               b[i].id, b[i].title, b[i].author, b[i].price);
    }
    return 0;
}
