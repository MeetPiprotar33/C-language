
#include <stdio.h>
//#include<string.h>
#include<stdbool.h>

//WAP TO find the first repeated character.
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
            for(int j=i+1;j<=length(str);j++){
            if (str[i]==str[j]){
                printf("The first reapeted character is : %c",str[i]);
                return 0;
            }    
            
        } 
    }
   
    
    
    return 0;
}