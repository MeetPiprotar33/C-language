#include <stdio.h>
//#include<string.h>
#include<stdbool.h>

//WAP TO count number of words
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
    
    int count=1;
    for (int i=0;i<=length(str);i++){
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t'){
            count++;
        }

    }

    printf("number of words in string are  : %d ",count);
    //puts(str);
    
    
    return 0;
}