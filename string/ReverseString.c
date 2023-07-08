#include <stdio.h>
#include<string.h>
//WAP TO REVRSE THE STRING 
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
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Original string : ");
    puts(str);
    for(int i=0,j=length(str)-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }

    printf("Reversed string : ");
    puts(str);

    return 0;
}