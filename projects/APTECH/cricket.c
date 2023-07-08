#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
int w=0;
int w2=0;
int superover()
{
    int number,T_Runs=0,w=0; 
    system("color e9");
    
   for (int i = 0; i <= 5; ++i) 
   {
       Sleep(500);
      
        number=(rand()%10);
       if(number==0)
       {
            printf("No Runs...\n");
       } 
        if(number==9)
       {
            printf("%d\t",number);  
            T_Runs=T_Runs+number; 
            printf("\n");
       } 
    	
   }
    printf("\nTotal Runs in this Over is=%d\n",T_Runs);
    
    return T_Runs;
}
int Over()
{
     int number,T_Runs=0,d2;
   for (int i = 0; i <= 5; ++i) 
   {
      system("color 70");

        Sleep(500);
         if(w==10)
            {
              goto label;
              break;
             }
        number=(rand()%10);
       if(number==0||number==7||number==8||number==9)
       {
           if(number==8)
           {
               system("color 97");
               i=i-1;
               printf("wid boll\n");
               T_Runs=T_Runs+1;
               Sleep(2000);
           }
           if(number==7)
           {
               system("color 04");
               i=i-1;
               printf("no ball\n");
               T_Runs=T_Runs+1;
                Sleep(2000);
           }
           if(number==0)
           {
               printf("No Runs...\n");
           }
            if(number==9)
           { 
               w++;
              
               printf("Out..it's...Wicket down%d\n",w);
               system("color 0e");
                Sleep(2000);
              
           }
       } 
        else
       {
            printf("%d\t",number);  
            T_Runs=T_Runs+number; 
            printf("\n");
       } 
    	Sleep(500);
        srand(time(NULL));
   }
    printf("\nTotal Runs in this Over is=%d\n",T_Runs);
    d2=T_Runs;
     printf("\nnet RunRate is=%0.2f\n",(float)d2/6);
    label:
    return T_Runs;
}
int Over2()
{
     int number,T_Runs2=0,d;
   for (int j = 0; j <= 5; ++j) 
   {
       system("color a0");

      
        Sleep(500);
         if(w2==10)
            {
              goto label;
              break;
             }
        number=(rand()%10);
       if(number==0||number==7||number==8||number==9)
       {
           if(number==8)
           {
               system("color 97");
               j=j-1;
               printf("wid boll\n");
               T_Runs2=T_Runs2+1;
                Sleep(2000);
           }
           if(number==7)
           {
               system("color 04");
               j=j-1;
               printf("no ball\n");
               T_Runs2=T_Runs2+1;
                Sleep(2000);
           }
           if(number==0)
           {
               printf("No Runs...\n");
           }
            else
           { 
               w2++;
              
               printf("Out..it's...Wicket down%d\n",w2);
                 Sleep(2000);
           }
       } 
        else
       {
            printf("%d\t",number);  
            T_Runs2=T_Runs2+number; 
            printf("\n");
       } 
    	Sleep(500);
        srand(time(NULL));
   }
    printf("\nTotal Runs in this Over is=%d\n",T_Runs2);
    d=T_Runs2;
     printf("\nnet RunRate is=%0.2f\n",(float)d/6);
    label:
    return T_Runs2;
}
 void main()
 {
    // loop 20 times
    int j,Total1=0,Run=0,Total2=0,b,runs=0,R1=0,R2=0,how,k=0,k2=0,target;
    system("color 3f");
    printf("Today its Super Match We Have Ind VS Pak\n\nenter the overs\n\n");
    scanf("%d",&how);
    printf("\n");
    system("cls");
    for(j=1;j<=how;j++)
    { 
         system("color 3f");
         system("color 04");
         k2++;
        printf("\nover\t%d",k2);
        printf("\n");
       Run=Over();
       Total1+=Run;
       
    }
    system("cls"); 
    target=Total1;
    printf("Now Its Time For 2ed Team %d Runs TO Win\t",target+1);
    printf("\n\nRequired Run Rate is %d",target+1/20);
    printf("\n\n2ed Seesion Start in Just Movment...\n\n\n");
    for(b=0;b<=2;b++)
    {
         system("color 3f");
          Sleep(500);
    }
   
     for(int k=0;k<=how;k++)
    {   system("color 3f");
        system("color 0a");
      
        printf("\nover\t%d",k);
        printf("\n");
       Run=Over2();
       Total2+=Run;
      
    }
     printf("Total of Teams1 Runs is %d\n",Total1);
     printf("Total of Teams2 Runs is %d\n",Total2);
   if(Total1<Total2)
   {
        system("color 3f");
       runs=Total2-Total1;
       printf("Team 2 is Won by %d\n",runs);
   }
   else if(Total1>Total2)
   {
        system("color 3f");
       runs=Total1-Total2;
       printf("Team 1 is Won by %d\n",runs);
   }
   else
   {
       printf("ohhhhhhhhh...its  Tie.....\n");
       printf("Now Its Time TO super Over\n");
       R1=superover();
       R2=superover();
       if(R1>R2)
       {
            system("color 3f");
           runs=R1-R2;
           printf("Team 1 is Won by %d",runs);
       }
       else
       {
            system("color 3f");
           runs=R2-R1;
           printf("Team 2 is Won by %d",runs);
       }

   }
    getch();
 } 