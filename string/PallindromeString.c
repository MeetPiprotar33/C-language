#include <stdio.h>
//#include<string.h>
#include<stdbool.h>

//WAP TO CHECK WHETHER THE STRING IS PALLINDROME OR NOT
//M33T

int length(char len[]){
        int i=0,count=0;
        while(len[i]!='\0'){
            count++,i++;
        }
        return count;
}
int pallindrome(char pal[]){
    bool flag =true;

    for(int i=0,j=length(pal)-1;i<=j;i++,j--){
        if(pal[i]!=pal[j]){
            flag=false;
            }
    }
    return flag;

}
int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Original string : ");
    puts(str);

    bool ispallindrome=pallindrome(str);
    if (ispallindrome==true){
        printf("The string is pallindrome..");
    }else{
        printf("The string is not pallindrome..");
    }
    
    return 0;
}