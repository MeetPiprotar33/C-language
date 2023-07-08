#include <stdio.h>
//#include<string.h>
#include<stdbool.h>

//WAP TO sort the string in ascending order

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
    
    printf("The Entered string is : ");
    puts(str);
    
    for(int i=1;i<length(str);i++){
        for(int j=0;j<length(str)-1;j++){
            if(str[j]>str[j+1]){
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        } 
    }

    printf("The sorted string is : ");
    puts(str);
    
    
    return 0;
}