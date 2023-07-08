#include <stdio.h>
#include<string.h>
#include<stdbool.h>

//WAP TO count the number of character present in the string
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
    
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Enter the character : ");
    scanf("%c",&a);
    a =toupper(a);
    
    int count=0;
    for(int i=0;i<length(str);i++){
        char upper= toupper(str[i]);
        if (a==upper) count++;
    }

    if(count!=0){
        printf("The character is s%d times present in the string.. ",count);
    }else{
        printf("Sorry the character is not present in the string..");
    }
    
    return 0;
}