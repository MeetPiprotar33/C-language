
#include <stdio.h>
//#include<string.h>
#include<stdbool.h>

//WAP TO remove spaces
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

    
    for(int i=0;i<=length(str);i++){
        if(str[i]==' '){
            for(int j=i;j<=length(str);j++){
                str[j]=str[j+1];
            }
        } 
    }
    printf("changed string : ");
    puts(str);
    
    
    return 0;
}