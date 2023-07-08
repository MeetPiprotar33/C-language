//WAP using pointer and function to determine the length of string.
//M33T

#include<stdio.h>
#include<string.h>

int length(char* a){
    int i=0,count=0;
    while (*a!='\0')
    {
        count++;
        a+=1;
    }
    
    return count;   
}
int main(){
    char str[]="MEET PIPRTOAR";
    /* 
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]s",&str); 
    */ 
    printf("The length of the given string is %d",length(str));
  
}