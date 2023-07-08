
#include <stdio.h>
//#include<string.h>
#include<stdbool.h>

//WAP TO REMOVE THE CHARACTER FROM THE STRING
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
    printf("Enter a character you wanted to remove: ");
    scanf("%c",&a);

    printf("Original string : ");
    puts(str);
    bool flag=false;
    int index=-1;
    for(int i=0;i<=length(str);i++){
        if (str[i]==a)  {
            index=i;
            flag=true; }
    }

    if(flag==true){
        for(int i=index;i<=length(str);i++){
            str[i]=str[i+1];
        }
        printf("changed string : ");
        puts(str);
    }else{printf("The character given is not present in the list..");}
    
    
    return 0;
}