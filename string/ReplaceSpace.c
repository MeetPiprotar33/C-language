
#include <stdio.h>
//#include<string.h>
#include<stdbool.h>

//WAP TO REPLACE SPACE WITH THE OTHER CHARACTER
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
    printf("Enter a character you wanted to add at the place of the space : ");
    scanf("%c",&a);

    printf("Original string : ");
    puts(str);
    bool flag=false;

    for (int i=0;i<=length(str);i++){
        if (str[i]==' '){
            str[i]=a;
            flag=true;
        }
    }
     if(flag==true){
        printf("changed string : ");
        puts(str);
    }else{
        printf("Sorry string does not contain any space in beetween");
    }
    
    return 0;
}