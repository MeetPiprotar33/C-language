#include <stdio.h>
//#include<string.h>
#include<stdbool.h>

//WAP TO FIND NUMBER OF DIGIT NUMBER AND SPECIAL CHARACTERS IN STRING
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
    
    int alphabet=0,num=0,spchar=0;
    for(int i=0;i<length(str);i++){
        if(str[i]>='A'&&str[i]<='Z') alphabet++;
        else if(str[i]>='a'&&str[i]<='z') alphabet++;
        else if(str[i]>='0'&&str[i]<='9') num++;
        else spchar++;
    }

    printf("The number of alphabets in the string are : %d\n",alphabet);
    printf("The number of digits in the string are : %d\n",num);
    printf("The number of special character in the string are : %d",spchar);
    
    return 0;
}