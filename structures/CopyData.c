// create a structure named as book with name price and number of pages
//WITH USE OF TYPEDEF
//M33T


#include<stdio.h>
#include<string.h>

int main(){
    
    typedef struct Book
    {
        char name[50];
        float price;
        int pages;
    }Book;

    Book a;
    Book b;
    Book c;
    strcpy(a.name,"Seven Secret");
    a.pages=500;
    a.price=510.5;

    printf("The price of the book %s is :%d\n",a.name,a.pages);
    printf("The price of the book %s is :%f\n",a.name,a.price);

    strcpy(b.name,a.name);
    b.pages=a.pages;
    b.price=a.price;
    printf("By (copying all details):-\n");
    printf("The price of the book %s is :%d\n",b.name,b.pages);
    printf("The price of the book %s is :%f\n",b.name,b.price);
    
    c=a;
    printf("By (c=a):-\n");
    printf("The price of the book %s is :%d\n",c.name,c.pages);
    printf("The price of the book %s is :%f\n",c.name,c.price);

    

    return 0;
}