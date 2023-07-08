
#include <stdio.h>
//#include<string.h>
#include<stdbool.h>

//WAP TO count all characters in string

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

    char check;
    for(int i=0;i<length(str);i++){
        if(str[i]!=check){
            int count=1;
            for(int j=i+1;j<=length(str);j++){
                if (str[i]==str[j] ) {
                    count++;
                    check=str[i];
                    }
                }
            
            printf("%c -> %d times \n",str[i],count);
        }
    }
    return 0;
}