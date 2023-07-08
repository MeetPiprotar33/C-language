#include <stdio.h>
//#include<string.h>
#include<stdbool.h>

//WAP TO INSERT THE ELEMENT AT THE GICEN INDEX
//M33T

int length(char len[]){
        int i=0,count=0;
        while(len[i]!='\0'){
            count++,i++;
        }
        return count;
}

int main() {
    char str[100];
    char a;
    int index;
    
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character you wanted to insert : ");
    scanf("%c",&a);
    printf("Enter the index where you want to add character : ");
    scanf("%d",&index);
    printf("Original string : ");
    puts(str);
    for(int i=length(str)-1;i>=index;i--){
        str[i+1]=str[i];
    }
    str[index]=a;

    printf("changed string : ");
    puts(str);
    
    
    return 0;
}