#include<stdio.h>
#include<string.h>

int main(){
    char meet[20]="Hello";

    puts(meet);

    strcpy(meet,"yes");
    puts(meet);
}