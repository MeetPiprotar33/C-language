// create a structure named as book with name price and number of pages
//M33T


#include<stdio.h>
#include<string.h>

int main(){
    
    struct Book
    {
        char name[50];
        float price;
        int pages;
    }a,b,c;

    strcpy(a.name,"Seven Secret");
    a.pages=500;
    a.price=510.5;

    printf("The price of the book %s is :%d\n",a.name,a.pages);
    printf("The price of the book %s is :%f\n",a.name,a.price);

    strcpy(b.name,"Famous five");
    b.pages=700;
    b.price=810.5;
    
    printf("The price of the book %s is :%d\n",b.name,b.pages);
    printf("The price of the book %s is :%f\n",b.name,b.price);
    strcpy(c.name,"Last world");
    c.pages=600;
    c.price=855.5;
    
    printf("The price of the book %s is :%d\n",c.name,c.pages);
    printf("The price of the book %s is :%f\n",c.name,c.price);


    

    return 0;
}