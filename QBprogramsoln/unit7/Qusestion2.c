//Write a program in C using structure to enter roll no, 
//marks of threesubjects for 3 students and find
//total obtained by each student.

//M33T

#include<stdio.h>
#include<string.h>

int main(){
    typedef struct marks{
        int RollNumber;
        int Maths;
        int Physics;
        int Cs;
    }marks;

    marks arr[3];
    for(int i=0;i<3;i++){
        printf("Enter the roll Number of student %d :",i+1);
        scanf("%d",&arr[i].RollNumber);
        printf("Enter the marks of maths of student %d :",i+1);
        scanf("%d",&arr[i].Maths);
        printf("Enter the marks of physics of student %d :",i+1);
        scanf("%d",&arr[i].Physics);
        printf("Enter the marks of cs of student %d :",i+1);
        scanf("%d",&arr[i].Cs);
    } 
    for(int i=0;i<3;i++){
        printf("Roll Number of student %d is :%d\n",i+1,arr[i].RollNumber);
        printf("Marks of maths of student %d is => %d \n",i+1,arr[i].Maths);
        printf("Marks of physics of student %d is => %d \n",i+1,arr[i].Physics);
        printf("Marks of cs of student %d is => %d \n",i+1,arr[i].Cs);
        
    }

}