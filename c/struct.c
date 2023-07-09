#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int  book_id;
} book = {"C 语言", "RUNOOB", "编程语言", 123456};

void printBooks(struct Books book)
{
    printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
}

/*指针*/
void printBooks2(struct Books *book) 
{
    printf( "Book title : %s\n", book->title);
   printf( "Book author : %s\n", book->author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->book_id);

}

/*位域*/
struct Status
{
    unsigned int widthVaild : 1;
};

/*typedef关键字，为类型取一个新的名字*/
typedef unsigned char CHAR;
CHAR char1, char2;

int main() {
    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);

    struct Books Book1;
    strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   /* 输出 Book1 信息 */
   printBooks(Book1);
   printBooks2(&Book1);
    
    return 0;
}