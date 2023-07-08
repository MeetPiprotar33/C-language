#include <stdio.h>
//#include<string.h>
#include<stdbool.h>

//WAP TO COMPARE THE STRING
//M33T

int length(char len[]){
        int i=0,count=0;
        while(len[i]!='\0'){
            count++,i++;
        }
        return count;
}

int main() {
    char str[100],str1[100];
    
    
    printf("Enter a first string: ");
    gets(str);
    printf("Enter a second string: ");
    gets(str1);
    
    printf("string 1 : ");
    puts(str);
    printf("string 2: ");
    puts(str1);

    bool flag=true;
    if(length(str)==length(str1)){
        for(int i=0;i<=length(str);i++){
            if(str[i]!=str1[i]){
                flag=false;
            }
        }
    }else{
        flag=false;
    }
    

    if(flag==true){
        printf("The given strings are same..");
    }else{
        printf("The given strings are not same..");
    }
    
    
    return 0;
}