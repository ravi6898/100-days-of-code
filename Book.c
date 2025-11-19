#include <stdio.h>
struct Book 
{
    int book_id;
    char title[100];
    char author[100];
    float price;
};

void printBookDetails(struct Book b) 
{
    printf("\n--- Book Details ---\n");
    printf("Book ID   : %d\n", b.book_id);
    printf("Title     : %s\n", b.title);
    printf("Author    : %s\n", b.author);
    printf("Price     : ₹%.2f\n", b.price);
}

int main() 
{
    struct Book myBook;

    printf("Enter Book ID: ");
    scanf("%d", &myBook.book_id);
    getchar(); 

    printf("Enter Title: ");
    fgets(myBook.title, sizeof(myBook.title), stdin);
    size_t len = strlen(myBook.title);
    if (len > 0 && myBook.title[len - 1] == '\n') 
    {
        myBook.title[len - 1] = '\0';
    }

    printf("Enter Author Name: ");
    fgets(myBook.author, sizeof(myBook.author), stdin);
    len = strlen(myBook.author);
    if (len > 0 && myBook.author[len - 1] == '\n') 
    {
        myBook.author[len - 1] = '\0';
    }

    printf("Enter Price: ₹");
    scanf("%f", &myBook.price);
    
    printBookDetails(myBook);

    return 0;
}