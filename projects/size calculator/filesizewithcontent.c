#include <stdio.h>
#include<string.h>

int main() {
    FILE *file;
    char line[100];
    long size;
    char strname[15];
    int i=0,filenamesize=0;
    int Characters=0,Words=1,Lines=1;

    printf("Enter the name of the fil:");
    scanf("%s",&strname);
    while(strname[i]!='\0'){
        filenamesize++;
        i++;
    }

    if(strname[filenamesize]!='t'){
        if(strname[filenamesize]-1!='x'){
            if(strname[filenamesize-2]!='t'){
                if(strname[filenamesize-3]!='.'){
                    strcat(strname,".txt");
                }else goto label;
            }else goto label;
        }else goto label;
    }else goto label;

    label:
    file = fopen(strname, "rb");

    if (file == NULL) {
        printf("FILE IS NOT AVILABLE IN THIS FOLDER.\n");
        return 1;
    }

    printf("File contents:\n");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);        
    }
    i=0;
    while(line[i]!='\0'){
        int ascii=(int)line;
        if(*line[i]==' '){
            Characters++;
            Words++;
        }else if(*line[i]=='\n'){
            Characters++;
            Words++;
            Lines++;
        }else if (ascii>0 || ascii<=128) Characters++;
        i++;
    }
    printf("\n");


    fseek(file, 0, SEEK_END);

    size = ftell(file);

    fclose(file);

    printf("The size of the file is %ld bytes.\n", size);
    printf("Number of characters are %d.\n",Characters);
    printf("Number of Words are %d.\n",Words);
    printf("Number of Lines are %d.\n",Lines);
    return 0;
}
