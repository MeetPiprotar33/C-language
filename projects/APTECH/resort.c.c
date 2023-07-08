#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

struct login 
{
long int number;
int age;
char username[20];
char password[20];
char email[100];
char add[100];
}l;
FILE *fl;
void enter()
{
system("color 2");
printf("\n\n\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
printf("\t\t\t\t\tYours Welcome In Devine Resort......\n");
printf("\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}
void signup()
{
   struct login l;
   int i;
   char c;
   fl= fopen("sign.txt","ab");
   printf("\t\t\t\t\t\t\tPlease Wait");
   for(i=0;i<=2;i++)
   {
    Sleep(800);
    printf(".");   
   }
   printf("\n\n\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
   printf("\t\t\t\tYours Welcome In Sign Up Zone Of Devine Resort......\n");
   printf("\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
   printf("\t\t\t\t\t\tSet Your User-Name:");
   scanf("%s",l.username);
   printf("\n\n\t\t\t\t\t\tSet Your Password:");
   scanf("%s",&l.password);
   printf("\n\n\t\t\t\t\t\tEnter Your Age:");
   scanf("%d",&l.age);
    printf("\n\n\t\t\t\t\t\tEnter Your Email-Id:");
   scanf("%s",l.email);
    printf("\n\n\t\t\t\t\t\tEnter Your Mobile-Number:");
   scanf("%ld",&l.number);
  printf("\n\n\t\t\t\t\t\tEnter Your Address:");
  scanf("%s",l.add);
  
   for(i=0;c=getch()!=13;i++)
   {
       l.password[i]=c;
   }
   printf("\n\n\t\t\t\t\t\tPress Enter To Continue......");
   if(getch()==13)
   {
       fwrite(&l,sizeof(l),1,fl);
   
printf("\n\n\t\t\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
printf("\t\t\t\t\t\t\tInformation Saved......\n");
printf("\t\t\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
   }
   else
   return;
   fclose(fl);
}
void login()
{
   struct login l;
   int i,option;
   char username[20],password[20],checku,checkp;
   printf("\t\t\t\t\t\t\tPlease Wait");
   for(i=0;i<=2;i++)
   {
    Sleep(800);
    printf(".");   
   }
   printf("\n\n\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
   printf("\t\t\t\tYours Welcome In Log In Zone Of Devine Resort......\n");
   printf("\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
   fl=fopen("sign.txt","rb"); 
    printf("\t\t\t\t\t\tEnter Your User-Name:");
    scanf("%s",&username);
    printf("\t\t\t\t\t\tEnter Your Password:");
    scanf("%s",&password);
   while(!feof(fl))
   {
       fread(&l,sizeof(l),1,fl);
       checku=strcmp(username,l.username);
       checkp=strcmp(password,l.password);
       if(checku==0 && checkp!=0)
       {
           printf("\n\t\t\t\t\t\tInvalid Password......");
           break;
       }
       else if(checku!=0 && checkp==0)
       {
           printf("\n\t\t\t\t\t\tInvalid User-Name......");
           break;
       }
       else if(checku==0 && checkp==0)
       {
           system("CLS");
           printf("\t\t\t\t\t\tLog In Succesfully......\n\n");
           printf("\t\t\t\t\t\tHello,%s Welcome Here......",l.username);
       }
}
fclose(fl);
    printf("\n\n\t\tLying amidst the foothills of the Himalayas, Laxman Jhula Divine Resort in Rishikesh...\n\n");
    printf("\t\tIndia overlooks the holy Ganges thus presenting a completely mesmerizing spectacle to its visitors.\n\n");
    printf("\t\tGiving the view of the screen, Turquoise Ganga. The awesome beauty of breathtaking, sun-washed river \n\n");
    printf("\t\tcomplements the resort to provide you a real freshness cool and fresh air originating from mesmerizing \n\n");
    printf("\t\tGanga refreshing your body and soul. Ravishing view of sunsets and an enchanting sound of water of holy \n\n");
    printf("\t\tGanga refreshes the surroundings with its melody. Laxman Jhula Divine Resort is one of the most popular \n\n");
    printf("\t\tResort in Rishikesh. Laxman Jhula Divine Resort possesses all the qualities and amenities that are required \n\n");
    printf("\t\tto cater to the needs of a worldwide client base. Amongst all the Hotels in Rishikesh, the standards set by \n\n");
    printf("\t\tLaxman Jhula Divine Resort can be compared to the standards set by any of the top Resort in Uttarakhand.\n\n\n");
    system("PAUSE");
    printf("\t\t\t\tPlease Wait");
    for(i=0;i<=4;i++)
    {
      Sleep(800);
      printf(".");
    }
    printf("\n\nWould You Like To Know Any Other Information About Us?\n\n");
    printf("( 1 )Yes\n");
    printf("( 2 )No\n\n");
    printf("Enter Your Choice:");
    scanf("%d",&option);
    if(option==1)
    {
      printf("Check Our Website...\nwww.divineresort.com\n");
    }
    else
    {
      system("CLS");
    }
}
void account()
{
   struct login l;
   int i,c;
   char username[20],password[20],checku,checkp;
   printf("\t\t\t\t\t\t\tPlease Wait");
   for(i=0;i<=2;i++)
   {
    Sleep(800);
    printf(".");   
   }
   printf("\n\n\n\t\t\t\t\t____________________You must first login to your account____________________\n\n\n");  
   fl=fopen("sign.txt","rb"); 
    printf("\t\t\t\t\t\tEnter Your User-Name:");
    scanf("%s",&username);
    printf("\t\t\t\t\t\tEnter Your Password:");
    scanf("%s",&password);
   while(!feof(fl))
   {
       fread(&l,sizeof(l),1,fl);
       checku=strcmp(username,l.username);
       checkp=strcmp(password,l.password);
       if(checku==0 && checkp!=0)
       {
           printf("\n\t\t\t\t\t\tInvalid Password......");
           break;
       }
       else if(checku!=0 && checkp==0)
       {
           printf("\n\t\t\t\t\t\tInvalid User-Name......");
           break;
       }
       else if(checku==0 && checkp==0)
       {
           system("CLS");
       }
   }
   fclose(fl);
   fl=fopen("sign.txt","rb");
   printf("\n\n\t\t\t_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
   printf("\t\t\t\t\t\tDetails Of Your Account:");
   printf("\n\t\t\t_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
   while(1)
   {
       fread(&l,sizeof(l),1,fl);
       if(feof(fl))
       {
           break;
       }
       printf("\n\n\n\t\t\t\t\t\tYour Name:%s",l.username);
       printf("\n\t\t\t\t\t\tYour Email-Id:%s",l.email);
       printf("\n\t\t\t\t\t\tYour Age:%d",l.age);
       printf("\n\t\t\t\t\t\tYour Mobile-Number:%ld",l.number);
       printf("\n\t\t\t\t\t\tYour Address Is:%s",l.add);
   }
   fclose(fl);
}
void intro()
{
    int i,option;
    printf("\t\t\t\t\t\t\t\tHello\n\n");
    printf("\t\t\t\tWelcome To The Divine Resort\n\n\n");
    printf("\t\tLying amidst the foothills of the Himalayas, Laxman Jhula Divine Resort in Rishikesh...\n\n");
    printf("\t\tIndia overlooks the holy Ganges thus presenting a completely mesmerizing spectacle to its visitors.\n\n");
    printf("\t\tGiving the view of the screen, Turquoise Ganga. The awesome beauty of breathtaking, sun-washed river \n\n");
    printf("\t\tcomplements the resort to provide you a real freshness cool and fresh air originating from mesmerizing \n\n");
    printf("\t\tGanga refreshing your body and soul. Ravishing view of sunsets and an enchanting sound of water of holy \n\n");
    printf("\t\tGanga refreshes the surroundings with its melody. Laxman Jhula Divine Resort is one of the most popular \n\n");
    printf("\t\tResort in Rishikesh. Laxman Jhula Divine Resort possesses all the qualities and amenities that are required \n\n");
    printf("\t\tto cater to the needs of a worldwide client base. Amongst all the Hotels in Rishikesh, the standards set by \n\n");
    printf("\t\tLaxman Jhula Divine Resort can be compared to the standards set by any of the top Resort in Uttarakhand.\n\n\n");
    system("PAUSE");
    printf("\t\t\t\tPlease Wait");
    for(i=0;i<=4;i++)
    {
      Sleep(800);
      printf(".");
    }
    printf("\n\nWould You Like To Know Any Other Information About Us?\n\n");
    printf("( 1 )Yes\n");
    printf("( 2 )No\n\n");
    printf("Enter Your Choice:");
    scanf("%d",&option);
    if(option==1)
    {
      printf("Check Our Website...\nwww.divineresort.com\n");
    }
    else
    {
      system("CLS");
    }
}
void food()
{
  


int choice,ch,number,q,bill,dis,total,i;
char name[20];   
printf("\n\n\t\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
printf("\t\t\t\t\t\tYours Welcome In Food Zone Of Devine Resort......\n");
printf("\t\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
printf("\n\t\t\t\tEnter Your Name:");
scanf("%s",&name);
printf("\n\n\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-Check Our Foods+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
printf("\n\t\t\t\t\t[1]---------------------------------------->Veg\n");
printf("\n\t\t\t\t\t[2]---------------------------------------->Soft-Drinks\n");
printf("\n\t\t\t\t\t[3]---------------------------------------->Ice-Creams\n");
printf("\n\t\t\t\t\t[4]---------------------------------------->Milk-Shakes\n");
printf("\n\t\t\t\t\tEnter Your Choice:");
scanf("%d",&choice);
switch (choice)
{
case 1:
printf("\n\t\t\t\t\tYour Choice Is:%d",choice);
printf("\n\n\t\t\t\t\tThis Is Our Veg Menu:");
printf("\n\n\t\t\t\t\t1.) Khaman---------------------------- Price->$100\n");
printf("\n\t\t\t\t\t2.) Samosa---------------------------- Price->$50\n");
printf("\n\t\t\t\t\t3.) Kachori---------------------------- Price->$60\n");
printf("\n\t\t\t\t\t4.) Veg-Momos---------------------------- Price->$100\n");
printf("\n\t\t\t\t\t5.) Dabeli---------------------------- Price->$40\n");
printf("\n\t\t\t\t\t6.) Pizza---------------------------- Price->$100\n");
printf("\n\t\t\t\t\t\tEnter Your Choice:");
scanf("%d",&ch);
printf("\n\t\t\t\t\t\tYour Choice Is:%d",ch);
printf("\n\n\t\t\t\t\t\tEnter Quantity:");
scanf("%d",&q);
if(ch==1)
{
    total=q*100;
    dis=total*5/100;
    bill=total-dis;
    system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tFood");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tKhaman");
    printf("\t\t$100");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==2)
{
    total=q*50;
    dis=total*5/100;
    bill=total-dis;
     system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tFood");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tSamosa");
    printf("\t\t$50");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==3)
{
    total=q*60;
    dis=total*5/100;
    bill=total-dis;
      system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tFood");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tKachori");
    printf("\t\t$60");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==4)
{
    total=q*100;
    dis=total*5/100;
    bill=total-dis;
     system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tFood");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tMomos");
    printf("\t\t$100");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==5)
{
    total=q*40;
    dis=total*5/100;
    bill=total-dis;
     system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tFood");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tDabeli");
    printf("\t\t$40");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==6)
{
    total=q*100;
    dis=total*5/100;
    bill=total-dis;
     system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tFood");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tPizza");
    printf("\t\t$100");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
 break;

case 2:
printf("\n\t\t\t\t\tYour Choice Is:%d",choice);
printf("\n\n\t\t\t\t\tThis Is Our Soft Drinks Menu:");
printf("\n\n\t\t\t\t\t1.) Coca Cola---------------------------- Price->$20\n");
printf("\n\t\t\t\t\t2.) Limca---------------------------- Price->$15\n");
printf("\n\t\t\t\t\t3.) Maza---------------------------- Price->$12\n");
printf("\n\t\t\t\t\t4.) ThumbsUp---------------------------- Price->$18\n");
printf("\n\t\t\t\t\t5.) SevenUp---------------------------- Price->$20\n");
printf("\n\t\t\t\t\t6.) String---------------------------- Price->$15\n");
printf("\n\t\t\t\t\t\tEnter Your Choice:");
scanf("%d",&ch);
printf("\n\t\t\t\t\t\tYour Choice Is:%d",ch);
printf("\n\n\t\t\t\t\t\tEnter Quantity:");
scanf("%d",&q);
if(ch==1)
{
    total=q*20;
    dis=total*5/100;
    bill=total-dis;
    system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tDrinks");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tCoca Cola");
    printf("\t$20");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==2)
{
    total=q*15;
    dis=total*5/100;
    bill=total-dis;
     system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tDrinks");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tLimca");
    printf("\t\t$15");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==3)
{
    total=q*12;
    dis=total*5/100;
    bill=total-dis;
      system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tDrinks");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tMaza");
    printf("\t\t$12");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==4)
{
    total=q*18;
    dis=total*5/100;
    bill=total-dis;
     system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tDrinks");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tThumbsUp");
    printf("\t$18");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==5)
{
    total=q*20;
    dis=total*5/100;
    bill=total-dis;
     system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
   printf("\n\t\t\t\t\tDrinks");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tSevenUp");
    printf("\t\t$20");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==6)
{
    total=q*15;
    dis=total*5/100;
    bill=total-dis;
     system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tDrinks");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tString");
    printf("\t\t$15");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
break;

case 3:
printf("\n\t\t\t\t\tYour Choice Is:%d\n",choice);
printf("\n\n\t\t\t\t\tThis Is Our Ice-Cream Menu:\n");
printf("\n\n\t\t\t\t\t1.) Vanila---------------------------- Price->$20\n");
printf("\n\t\t\t\t\t2.) Chocolate-Chips---------------------------- Price->$30\n");
printf("\n\t\t\t\t\t3.) American-Nuts---------------------------- Price->$25\n");
printf("\n\t\t\t\t\t4.) Cookies-Cream---------------------------- Price->$30\n");
printf("\n\t\t\t\t\t5.) Afghan---------------------------- Price->$40\n");
printf("\n\t\t\t\t\t6.) Strawberry---------------------------- Price->$35\n");
printf("\n\t\t\t\t\t\tEnter Your Choice:");
scanf("%d",&ch);
printf("\n\t\t\t\t\t\tYour Choice Is:%d",ch);
printf("\n\n\t\t\t\t\t\tEnter Quantity:");
scanf("%d",&q);
if(ch==1)
{
    total=q*20;
    dis=total*5/100;
    bill=total-dis;
    system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tIce-Cream");
    printf("\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tVanila");
    printf("\t\t$20");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==2)
{
    total=q*30;
    dis=total*5/100;
    bill=total-dis;
    system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tIce-Cream");
    printf("\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tChocolate");
    printf("\t$30");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==3)
{
    total=q*25;
    dis=total*5/100;
    bill=total-dis;
     system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tIce-Cream");
    printf("\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tAme.Nuts");
    printf("\t$25");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==4)
{
    total=q*30;
    dis=total*5/100;
    bill=total-dis;
    system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tIce-Cream");
    printf("\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tCookies");
    printf("\t\t$30");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==5)
{
    total=q*40;
    dis=total*5/100;
    bill=total-dis;
    system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tIce-Cream");
    printf("\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tAfghan");
    printf("\t\t$40");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==6)
{
    total=q*35;
    dis=total*5/100;
    bill=total-dis;
    system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tIce-Cream");
    printf("\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tStrawberry");
    printf("\t$35");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
break;

case 4:
printf("\n\t\t\t\t\tYour Choice Is:%d\n",choice);
printf("\n\n\t\t\t\t\tThis Is Our Milk-Shake Menu:\n");
printf("\n\n\t\t\t\t\t1.) Chocolate---------------------------- Price->$100\n");
printf("\n\t\t\t\t\t2.) Pan------------------------------ Price->$90\n");
printf("\n\t\t\t\t\t3.) Mango---------------------------- Price->$110\n");
printf("\n\t\t\t\t\t4.) Strawberry---------------------------- Price->$90\n");
printf("\n\t\t\t\t\t5.) Almonds---------------------------- Price->$110\n");
printf("\n\t\t\t\t\t6.) Dry-Fruit---------------------------- Price->$200\n");
printf("\n\t\t\t\t\t\tEnter Your Choice:");
scanf("%d",&ch);
printf("\n\t\t\t\t\t\tYour Choice Is:%d",ch);
printf("\n\n\t\t\t\t\t\tEnter Quantity:");
scanf("%d",&q);
if(ch==1)
{
    total=q*100;
    dis=total*5/100;
    bill=total-dis;
    system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tShakes");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tChocolate");
    printf("\t$100");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==2)
{
    total=q*90;
    dis=total*5/100;
    bill=total-dis;
    system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tShakes");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tPan");
    printf("\t\t$90");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==3)
{
    total=q*110;
    dis=total*5/100;
    bill=total-dis;
    system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tShakes");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tMango");
    printf("\t\t$110");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==4)
{
    total=q*90;
    dis=total*5/100;
    bill=total-dis;
   system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tShakes");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tStrawberry");
    printf("\t$90");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==5)
{
    total=q*110;
    dis=total*5/100;
    bill=total-dis;
    system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tShakes");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tAlmonds");
    printf("\t\t$110");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
if(ch==6)
{
    total=q*200;
    dis=total*5/100;
    bill=total-dis;
    system("PAUSE");
    printf("\t\t\t\t\t\tPlease Wait...\n\n\t\t\t\t\t\tYour Bill Is Generating");
    for(i=0;i<=2;i++)
    {
        Sleep(800);
        printf(".");
    }
    printf("\n\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\tYour Bill");
    printf("\n\t\t\t\t-------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tShakes");
    printf("\t\tPrice");
    printf("\t\tQuantity");
    printf("\tTotal(with discount)");
    printf("\n\n\t\t\t\t\tDry-Fruits");
    printf("\t$200");
    printf("\t\t%d",q);
    printf("\t\t\t%d",bill);
    printf("\n\n\n\t\t\t\t\t\t\tCustomer's Name:%s",name);
    printf("\n\n\t\t\t\t\t\t\tCustomer's Bill No:%d",number);
}
break;
default:
printf("Your Choice Is Not Found......");
break;
}



}
void book()
{
 int room,day,choice,pin,total;
 char name[20];
 long int number;
 printf("\t\t\t\tDivine Resort:\n\n");
 printf("\t\t\t\tWelcome....\n\n");
 printf("\t\t\tAvailable Rooms:\n\n");
 printf("\t\t\t<1> 1 Double Bed With Garden View......\n");
 printf("\t\t\t<2> 2 Single Bed With Balcony......\n");
 printf("\t\t\t<3> 2 Double Bed With Balcony......\n");
 printf("\t\t\t<4> 1 Double Bed And 1 Single Bed With Garden View......\n");
 printf("\t\t\t<5> 1 Double Bed And 1 Single Bed With Balcony......\n");
 printf("Enter Your Choice:\n");
 scanf("%d",&room);
 if(room == 1)
 {
    printf("______________________________________________\n");
    printf("Your Choice Is 1 Double Bed With Garden View\n");
    printf("______________________________________________\n");
    printf("$1,500\t1 Night\n");
    printf("______________________________________________\n");
    printf("Enter Your Name:\n");
    scanf("%s",&name);
    printf("Enter Your Mobile Number:\n");
    scanf("%ld",&number);
    printf("Hello...");
    printf("%s\n",name);
    printf("\nHow many nights are you going to stay at this resort?");
    scanf("%d",&day);
    total=day*1500;
    printf("\nOkay...\nYour Total Bill Is:%d",total);
    printf("\nSelect one of the following options for payment:");
    printf("\n1 For Cash...");
    printf("\n2 For Online...");
    printf("\n3 For By Card...");
    printf("\nEnter Your Choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\nPlease Meet us at the reception......");
    }
    else if(choice==2)
    {
        printf("\nFor Online Payment Take Our Account Number From Our Website...\nwww.devineresort001.com");
    }
    else if(choice==3)
    {
        printf("\nPlease Enter Your Card's Pin:");
        scanf("%d",&pin);
        printf("\nYour Payment Is Done......");
    }
 }


 
 if(room == 2)
 {
    printf("______________________________________________\n");
    printf("Your Choice Is  2 Single Bed With Balcony\n");
    printf("______________________________________________\n");
    printf("$1,000\t1 Night\n");
    printf("______________________________________________\n");
    printf("Enter Your Name:\n");
    scanf("%s",&name);
    printf("Enter Your Mobile Number:\n");
    scanf("%ld",&number);
    printf("Hello...");
    printf("%s\n",name);
    printf("\nHow many nights are you going to stay at this resort?");
    scanf("%d",&day);
    total=day*1000;
    printf("\nOkay...\nYour Total Bill Is:%d",total);
    printf("\nSelect one of the following options for payment:");
    printf("\n1 For Cash...");
    printf("\n2 For Online...");
    printf("\n3 For By Card...");
    printf("\nEnter Your Choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\nPlease Meet us at the reception......");
    }
    else if(choice==2)
    {
        printf("\nFor Online Payment Take Our Account Number From Our Website...\nwww.devineresort001.com");
    }
    else if(choice==3)
    {
        printf("\nPlease Enter Your Card's Pin:");
        scanf("%d",&pin);
        printf("\nYour Payment Is Done......");
    }
 }
 
 if(room == 3)
 {
    printf("______________________________________________\n");
    printf("Your Choice Is  2 Double Bed With Balcony\n");
    printf("______________________________________________\n");
    printf("$2,000\t1 Night\n");
    printf("______________________________________________\n");
    printf("Enter Your Name:\n");
    scanf("%s",&name);
    printf("Enter Your Mobile Number:\n");
    scanf("%ld",&number);
    printf("Hello...");
    printf("%s\n",name);
    printf("\nHow many nights are you going to stay at this resort?");
    scanf("%d",&day);
    total=day*2000;
    printf("\nOkay...\nYour Total Bill Is:%d",total);
    printf("\nSelect one of the following options for payment:");
    printf("\n1 For Cash...");
    printf("\n2 For Online...");
    printf("\n3 For By Card...");
    printf("\nEnter Your Choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\nPlease Meet us at the reception......");
    }
    else if(choice==2)
    {
        printf("\nFor Online Payment Take Our Account Number From Our Website...\nwww.devineresort001.com");
    }
    else if(choice==3)
    {
        printf("\nPlease Enter Your Card's Pin:");
        scanf("%d",&pin);
        printf("\nYour Payment Is Done......");
    }
 }
   

 
 if(room == 4)
 {
    printf("______________________________________________\n");
    printf("Your Choice Is 1 Double Bed And 1 Single Bed With Garden View\n");
    printf("______________________________________________\n");
    printf("$4,000\t1 Night\n");
    printf("______________________________________________\n");
    printf("Enter Your Name:\n");
    scanf("%s",&name);
    printf("Enter Your Mobile Number:\n");
    scanf("%ld",&number);
    printf("Hello...");
    printf("%s\n",name);
    printf("\nHow many nights are you going to stay at this resort?");
    scanf("%d",&day);
    total=day*4000;
    printf("\nOkay...\nYour Total Bill Is:%d",total);
    printf("\nSelect one of the following options for payment:");
    printf("\n1 For Cash...");
    printf("\n2 For Online...");
    printf("\n3 For By Card...");
    printf("\nEnter Your Choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\nPlease Meet us at the reception......");
    }
    else if(choice==2)
    {
        printf("\nFor Online Payment Take Our Account Number From Our Website...\nwww.devineresort001.com");
    }
    else if(choice==3)
    {
        printf("\nPlease Enter Your Card's Pin:");
        scanf("%d",&pin);
        printf("\nYour Payment Is Done......");
    }
 }
   

 
 if(room == 5)
 {
    printf("______________________________________________\n");
    printf("Your Choice Is 1 Double Bed And 1 Single Bed With Balcony\n");
    printf("______________________________________________\n");
    printf("$3,000\t1 Night\n");
    printf("______________________________________________\n");
    printf("Enter Your Name:\n");
    scanf("%s",&name);
    printf("Enter Your Mobile Number:\n");
    scanf("%ld",&number);
    printf("Hello...");
    printf("%s\n",name);
    printf("\nHow many nights are you going to stay at this resort?");
    scanf("%d",&day);
    total=day*3000;
    printf("\nOkay...\nYour Total Bill Is:%d",total);
    printf("\nSelect one of the following options for payment:");
    printf("\n1 For Cash...");
    printf("\n2 For Online...");
    printf("\n3 For By Card...");
    printf("\nEnter Your Choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\nPlease Meet us at the reception......");
    }
    else if(choice==2)
    {
        printf("\nFor Online Payment Take Our Account Number From Our Website...\nwww.devineresort001.com");
    }
    else if(choice==3)
    {
        printf("\nPlease Enter Your Card's Pin:");
        scanf("%d",&pin);
        printf("\nYour Payment Is Done......");
    }
 }
 
}
int game()
{
   printf("\n\n\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
   printf("\t\t\t\tYours Welcome In Game Zone Of Devine Resort......\n");
   printf("\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
   printf("\n\t\t\t\t\t\tRandom Game");
   int number,userno,a,count=5;
    while (count>0)
    {
    printf("\n\t\t\t\t\t\tEnter Any Number In 0 To 99\n");
    scanf("%d",&userno);
    srand(time(NULL));
    number = rand() %100;
    printf("\n\n\n\t\tNow Computer  Guessing  Number LOADING \n\t\t");
   	for( a=0;a<10;a++) 
	{
		Sleep(100);
     
		printf("...");
        
	}
    if(number==userno)
    {
        printf("Wow.......... You Win\n");
        printf("computer take number is %d\n",number);
        break;
    }
    else
    {    printf("computer take number is %d\n",number);
        printf("Try Next Time\n");
    }
    count--;
    printf("\n%d Times remaining\n",count);
     }
     printf("Game Over");
return 0;
}
void feedback()
{
    char fb[100];
    printf("\t\t\t\t\t\tWould You Like Our Resort And Our Services?");
    printf("\n\t\t\t\t\t\tGive Us Feedback......");
    printf("\n\t\t\t\t\t\tEnter Your Feedback:");
    scanf("%s",&fb);
    printf("\n",fb);
}
void we()
{
    printf("\n\t\t\t**************************************************************************");
    printf("\n\n\t\t\t\t\tWe Have 50 Floors...");
    printf("\n\n\t\t\t\t\tWe Have Three Swiming Pool...");
    printf("\n\n\t\t\t\t\tWe Have Two Big Gardens...");
    printf("\n\n\t\t\t\t\tWe Have Five Theater...");
    printf("\n\n\t\t\t\t\tWe Have A Big Seating Area...");
    printf("\n\n\t\t\t\t\tWe Have A Cricket Pitch And A Play Ground...");
    printf("\n\t\t\t**************************************************************************");
}
void end()
{
    printf("Bye......");
}
int main()
{
enter();
int choice;
while(1)
{
printf("\n\n\t\t\t\t\t\tSelect option from the given list:");
printf("\n\t\t\t\t\t\t[1] Sign Up...");
printf("\n\t\t\t\t\t\t[2] Log In...");
printf("\n\t\t\t\t\t\t[3] Display All Account...");
printf("\n\t\t\t\t\t\t[4] About Us...");
printf("\n\t\t\t\t\t\t[5] Check Our Food Items...");
printf("\n\t\t\t\t\t\t[6] To Book Room In Our Resort ...");
printf("\n\t\t\t\t\t\t[7] Check Our Game Zone ...");
printf("\n\t\t\t\t\t\t[8] Give Us Feedback...");
printf("\n\t\t\t\t\t\t[9] To See What We Have...");
printf("\n\t\t\t\t\t\t[10] Exit...");
printf("\n\n\t\t\t\t\t\tEnter Your Choice:");
scanf("%d",&choice);
switch (choice)
{
case 1:
system("CLS");
signup();
break;

case 2:
system("CLS");
login();
break;

case 3:
system("CLS");
account();
break;

case 4:
system("CLS");
intro();
break;

case 5:
system("CLS");
food();
break;

case 6:
system("CLS");
book();
break;

case 7:
system("CLS");
game();
break;

case 8:
system("CLS");
feedback();
break;

case 9:
we();
break;

case 10:
system("CLS");
end();
return 0;

default:
printf("Your Choice Is Not Found......");
break;
}
}

getch();
}
