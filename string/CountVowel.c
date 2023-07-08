#include <stdio.h>
//#include<string.h>
#include<stdbool.h>

//WAP TO COUNT VOWELS 
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
    
    printf("The Entered string is : ");
    puts(str);
    
    int vowel=0,consonants=0;
    for(int i=0;i<length(str);i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') vowel++;
        else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') vowel++;
        else consonants++;
    }

    printf("The number of vowels in the string are : %d\n",vowel);
    printf("The number of consonants in the string are : %d\n",consonants);
    
    return 0;
}