#include<stdio.h>
#include <conio.h>
#include<stdlib.h>
#include <windows.h>
#define Vadapav 35.00
#define Dabeli 25.00
#define Samosa 35.20
void main()
{


	const double Puff = 30.00;
	const double Sandwich = 50.00;
	const double taxRate = 18.25;

	int V=0;
	int D=0;
	int S=0;
	int P=0;
	int Sw=0;
	long int cn=0;
	int a;

	float total_V;
	float total_D;
	float total_S;
	float total_P;
	float total_Sw;
	float subTotal;
	float tax;
	float bill_Amount;
	char name[250];
	

//	Statements


	printf("\t\tJain Food Center Billing System\n");
	printf("\n Please Enter the following details. \n\n");

	printf("Customer Name: \n");
	scanf("%s",&name);
	printf("Customer's Number: \n");
	scanf("%f",&cn);

	printf("\n\t***Enter 0 for none****");

	printf("\nHow many Vadapav were sold? \n");
	scanf("%d", &V);

	printf("How many Dabeli were sold? \n");
	scanf("%d", &D);

	printf("How many Samosa were sold? \n");
	scanf("%d", &S);

	printf("How many Puff were sold? \n");
	scanf("%d", &P);

	printf("How many Sandwich were sold? \n");
	scanf("%d", &Sw);

	printf("\n Press Any Key To Generate Bill");
	getch();

printf("\n\n\n\t\t\t\t\tLOADING \n\t\t\t\t\t");
   	for( a=0;a<10;a++) // Change 'a<?' to how many * you want
	{
		Sleep(1000);
     
		printf("...");
        
	}
      printf("\n\n\t\t\t\t\tBill Generated. \n\n");

      system("PAUSE");
      system("CLS");

//	Calculation Statements

	total_V = V * Vadapav;
	total_D = D * Dabeli;
	total_S = S * Samosa;
	total_P = P * Puff;
	total_Sw = Sw * Sandwich;
	subTotal = total_V + total_D + total_S + total_P + total_Sw;
	tax = (subTotal * taxRate)/100;
	bill_Amount = subTotal + tax;



//	Printing Bills
    printf("\n");
    printf("\t\t\t====================================================\n");
	printf("\t\t\t\t      Jain Food Center Bill\n");
	printf("\t\t\t====================================================\n");
	printf("\t\t\tQTY \t Description \t Unit Price\t Total Price\n");
	printf("\t\t\t--- \t ----------- \t ---------- \t -----------\n\n");
	printf("\t\t\t%02d \t Vadapav           %.2f       %10.2f \n", V, Vadapav, total_V);
	printf("\t\t\t%02d  \t Dabeli            %.2f       %10.2f  \n", D, Dabeli, total_D);
	printf("\t\t\t%02d   \t Samosa            %.2f       %10.2f   \n", S, Samosa, total_S);
	printf("\t\t\t%02d    \t Puff              %.2f       %10.2f    \n", P, Puff, total_P);
	printf("\t\t\t%02d     \t Sandwich          %.2f       %10.2f     \n\n", Sw, Sandwich, total_Sw);
	printf("\t\t\t                                           ---------\n\n");
	printf("\t\t\t                           SUBTOTAL      %10.2f   \n", subTotal);
	printf("\t\t\t                           TAX          %10.2f    \n", tax);
	printf("\t\t\t                           Total         %10.2f     \n", bill_Amount);
	printf("\t\t\t                           Customer name     %s     \n", name);
	printf("\t\t\t                           Customer no.      %ld     \n", cn);
	printf("\t\t\t====================================================\n\n");
	printf("\t\t\t\t\t\tEnd of bill\n\n");

	system("PAUSE");
	system("CLS");

	getch();

}




