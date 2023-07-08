#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
int easy();
int medium();
int elite();
long long int balance = 0;
int ans = 0;
void main()
{
    int pass, choice;
    char name;
    system("CLS");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t\tKBC:\t ");
    printf("Kaun Banega Crorepati\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n");
    printf("\n");
    printf("Enter Your ID\n");
    scanf("%s", &name);
    printf("\nEnter the Password\n");
    scanf("%lld", &pass);
    if (pass == 2541)
    {
        system("CLS");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\t\tKBC:\t ");
        printf("Kaun Banega Crorepati\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\n");
        printf("\n");
        printf("<1>\tEasy\n<2>\tMedium\n<3>\tElite\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            easy();
            break;
        case 2:
            medium();
            break;
        case 3:
            elite();
            break;

        default:
            printf("Your choice is unacceptable\nTry again");
            main();
            break;
        }
        elite();
    }
    else
    {
        printf("Your Password or ID IS incorrect");
    }

    getch();
}
int elite()
{
    int a, ans1, ans2, ans3, ans4, ans5;
    system("CLS");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t\tKBC:\t ");
    printf("Kaun Banega Crorepati\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n");
    printf("\n");
    printf("What was the name of all the three soccer clubs set up\nwith the help of Mahatama Gandhi in the early 20th century at Durban,\n Pretoria and Johannesburg ?\n");
    system("pause");
    for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
    {
        Sleep(400);

        printf("...........");
    }
    printf("\n<1>\tTruth Seekers\t\t\t");
    printf("<2>\tNon – Violents\n");
    printf("<3>\tPassive Resisters\t\t");
    printf("<4>\tNon co-operators\n");
    printf("Enter Answer\n");
    scanf("%d", &ans1);
    for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
    {
        Sleep(400);

        printf("...........");
    }

    if (ans1 == 3)
    {
        printf("\nYour answer is Correct\n");
        printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
        printf("You Have won 10k rupees\n");
        printf("\n");
        printf("Press any key to get another Quetion\n");
        system("pause");
        system("CLS");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\t\tKBC:\t ");
        printf("Kaun Banega Crorepati\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\n");
        printf("\n");
        printf("Which of these states has had the most number of its\ngovernors become presidents of India?\n");

        for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
        {
            Sleep(400);

            printf("...........");
        }
        printf("\n<1>\tRajasthan\t\t");
        printf("<2>\tBihar\n");
        printf("<3>\tPunjab\t\t\t");
        printf("<4>\tAndra Pradesh\n");
        printf("Enter Answer\n");
        scanf("%d", &ans2);
        for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
        {
            Sleep(400);

            printf("...........");
        }
        if (ans2 == 2)
        {
            printf("\n");
            system("pause");
            printf("\nYour answer is Correct\n");
            printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
            printf("You Have won 1 lac rupees\n");
            printf("\n");
            printf("Press any key to get another Quetion\n");
            system("pause");
            system("CLS");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("\t\tKBC:\t ");
            printf("Kaun Banega Crorepati\n");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("\n");
            printf("\n");
            printf("Who was the Indian bowler off whom Australian legend Don Bradman\ngot a single to reach his 100th first class century?\n");
            system("pause");
            for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
            {
                Sleep(400);

                printf("..........");
            }
            printf("\n<1>\tBaqa Jilani\t\t\t");
            printf("<2>\tCommandur Rangachari\n");
            printf("<3>\tGogumal Kishenchand\t\t");
            printf("<4>\tKanwar Rai Singh\n");
            printf("Enter Answer\n");
            scanf("%d", &ans3);
            for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
            {
                Sleep(400);

                printf("...........");
            }
            if (ans3 == 3)
            {
                printf("\nYour answer is Correct\n");
                printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
                printf("You Have won 1M rupees\n");
                printf("\n");
                printf("Press any key to get another Quetion\n");
                system("pause");
                system("CLS");
                printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("\t\tKBC:\t ");
                printf("Kaun Banega Crorepati\n");
                printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("\n");
                printf("\n");
                printf("‘Which of these Mughal structures was known by the name ‘Rauza-i-Munawwara?\n");
                system("pause");
                for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
                {
                    Sleep(400);

                    printf("...........");
                }
                printf("\n<1>\tShalimar Bagh\t\t\t");
                printf("<2>\tChini Ka Rauza\n");
                printf("<3>\tHumayun’s Tomb\t\t");
                printf("<4>\tTaj Mahal\n");
                printf("Enter Answer\n");
                scanf("%d", &ans4);
                for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
                {
                    Sleep(400);

                    printf("...........");
                }
                if (ans4 == 4)
                {
                    printf("\nYour answer is Correct\n");
                    printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
                    printf("You Have won 1Cr rupees\n");
                    printf("\n");
                    printf("Press any key to get another Quetion\n");
                    system("pause");
                    system("CLS");
                    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    printf("\t\tKBC:\t ");
                    printf("Kaun Banega Crorepati\n");
                    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    printf("\n");
                    printf("\n");
                    printf("In mythology, what was the name of Hiranyakashipu’s wife and Prahlad’s mother?\n");
                    for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
                    {
                        Sleep(400);

                        printf("..........");
                    }
                    printf("\n<1>\tKapinjala\t\t");
                    printf("<2>\tKayadhu\n");
                    printf("<3>\tKamalakshi\t\t");
                    printf("<4>\tKaushiki\n");
                    printf("Enter Answer\n");
                    scanf("%d", &ans5);
                    for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
                    {
                        Sleep(400);

                        printf("...........");
                    }

                    if (ans5 == 2)
                    {
                        printf("\nYour answer is Correct\n");
                        printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
                        printf("You Have won 2Cr rupees\n");
                        printf("\n");
                        printf("Press any key to get another Quetion\n");
                        system("pause");
                        system("CLS");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("\t\tKBC:\t ");
                        printf("Kaun Banega Crorepati\n");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("\n");
                        printf("\n");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("You Have Won:3cr 11lac 10 thousand Rs ");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    }
                    else
                    {
                        system("CLS");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("\t\tKBC:\t ");
                        printf("Kaun Banega Crorepati\n");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("\n");
                        printf("\n");
                        printf("Your Answer is incorrect\n");
                        printf("Game Over");
                        balance += 3101000;
                        return balance;
                    }
                }
                else
                {
                    system("CLS");
                    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    printf("\t\tKBC:\t ");
                    printf("Kaun Banega Crorepati\n");
                    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    printf("\n");
                    printf("\n");
                    printf("Your Answer is incorrect\n");
                    printf("Game Over");
                    balance += 1101000;
                    return balance;
                }
            }
            else
            {
                system("CLS");
                printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("\t\tKBC:\t ");
                printf("Kaun Banega Crorepati\n");
                printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("\n");
                printf("\n");
                printf("Your Answer is incorrect");
                printf("Game Over");
                balance += 1010000;
                return balance;
            }
        }
        else
        {
            system("CLS");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("\t\tKBC:\t ");
            printf("Kaun Banega Crorepati\n");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("\n");
            printf("\n");
            printf("Your Answer is incorrect");
            printf("Game Over");
            balance += 10000;
            return balance;
        }
    }
    else
    {
        system("CLS");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\t\t\tKBC:\t ");
        printf("Kaun Banega Crorepati\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\n");
        printf("\n");
        printf("Your Answer is incorrect\n");
        printf("Game Over");
        return balance;
    }
}
int easy()
{

    int a, ans1, ans2, ans3, ans4, ans5;
    system("CLS");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t\tKBC:\t ");
    printf("Kaun Banega Crorepati\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n");
    printf("\n");
    printf("What was the name of all the three soccer clubs set up\nwith the help of Mahatama Gandhi in the early 20th century at Durban,\n Pretoria and Johannesburg ?\n");
    system("pause");
    for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
    {
        Sleep(400);

        printf("...........");
    }
    printf("\n<1>\tTruth Seekers\t\t\t");
    printf("<2>\tNon – Violents\n");
    printf("<3>\tPassive Resisters\t\t");
    printf("<4>\tNon co-operators\n");
    printf("Enter Answer\n");
    scanf("%d", &ans1);
    for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
    {
        Sleep(400);

        printf("...........");
    }

    if (ans1 == 3)
    {
        printf("\nYour answer is Correct\n");
        printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
        printf("You Have won 10k rupees\n");
        printf("\n");
        printf("Press any key to get another Quetion\n");
        system("pause");
        system("CLS");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\t\tKBC:\t ");
        printf("Kaun Banega Crorepati\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\n");
        printf("\n");
        printf("Which of these states has had the most number of its\ngovernors become presidents of India?\n");

        for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
        {
            Sleep(400);

            printf("...........");
        }
        printf("\n<1>\tRajasthan\t\t");
        printf("<2>\tBihar\n");
        printf("<3>\tPunjab\t\t\t");
        printf("<4>\tAndra Pradesh\n");
        printf("Enter Answer\n");
        scanf("%d", &ans2);
        for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
        {
            Sleep(400);

            printf("...........");
        }
        if (ans2 == 2)
        {
            printf("\n");
            system("pause");
            printf("\nYour answer is Correct\n");
            printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
            printf("You Have won 1 lac rupees\n");
            printf("\n");
            printf("Press any key to get another Quetion\n");
            system("pause");
            system("CLS");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("\t\tKBC:\t ");
            printf("Kaun Banega Crorepati\n");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("\n");
            printf("\n");
            printf("Who was the Indian bowler off whom Australian legend Don Bradman\ngot a single to reach his 100th first class century?\n");
            system("pause");
            for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
            {
                Sleep(400);

                printf("..........");
            }
            printf("\n<1>\tBaqa Jilani\t\t\t");
            printf("<2>\tCommandur Rangachari\n");
            printf("<3>\tGogumal Kishenchand\t\t");
            printf("<4>\tKanwar Rai Singh\n");
            printf("Enter Answer\n");
            scanf("%d", &ans3);
            for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
            {
                Sleep(400);

                printf("...........");
            }
            if (ans3 == 3)
            {
                printf("\nYour answer is Correct\n");
                printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
                printf("You Have won 1M rupees\n");
                printf("\n");
                printf("Press any key to get another Quetion\n");
                system("pause");
                system("CLS");
                printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("\t\tKBC:\t ");
                printf("Kaun Banega Crorepati\n");
                printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("\n");
                printf("\n");
                printf("‘Which of these Mughal structures was known by the name ‘Rauza-i-Munawwara?\n");
                system("pause");
                for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
                {
                    Sleep(400);

                    printf("...........");
                }
                printf("\n<1>\tShalimar Bagh\t\t\t");
                printf("<2>\tChini Ka Rauza\n");
                printf("<3>\tHumayun’s Tomb\t\t");
                printf("<4>\tTaj Mahal\n");
                printf("Enter Answer\n");
                scanf("%d", &ans4);
                for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
                {
                    Sleep(400);

                    printf("...........");
                }
                if (ans4 == 4)
                {
                    printf("\nYour answer is Correct\n");
                    printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
                    printf("You Have won 1Cr rupees\n");
                    printf("\n");
                    printf("Press any key to get another Quetion\n");
                    system("pause");
                    system("CLS");
                    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    printf("\t\tKBC:\t ");
                    printf("Kaun Banega Crorepati\n");
                    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    printf("\n");
                    printf("\n");
                    printf("In mythology, what was the name of Hiranyakashipu’s wife and Prahlad’s mother?\n");
                    for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
                    {
                        Sleep(400);

                        printf("..........");
                    }
                    printf("\n<1>\tKapinjala\t\t");
                    printf("<2>\tKayadhu\n");
                    printf("<3>\tKamalakshi\t\t");
                    printf("<4>\tKaushiki\n");
                    printf("Enter Answer\n");
                    scanf("%d", &ans5);
                    for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
                    {
                        Sleep(400);

                        printf("...........");
                    }

                    if (ans5 == 2)
                    {
                        printf("\nYour answer is Correct\n");
                        printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
                        printf("You Have won 2Cr rupees\n");
                        printf("\n");
                        printf("Press any key to get another Quetion\n");
                        system("pause");
                        system("CLS");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("\t\tKBC:\t ");
                        printf("Kaun Banega Crorepati\n");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("\n");
                        printf("\n");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("You Have Won:3cr 11lac 10 thousand Rs ");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    }
                    else
                    {
                        system("CLS");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("\t\tKBC:\t ");
                        printf("Kaun Banega Crorepati\n");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("\n");
                        printf("\n");
                        printf("Your Answer is incorrect\n");
                        printf("Game Over");
                        balance += 3101000;
                        return balance;
                    }
                }
                else
                {
                    system("CLS");
                    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    printf("\t\tKBC:\t ");
                    printf("Kaun Banega Crorepati\n");
                    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    printf("\n");
                    printf("\n");
                    printf("Your Answer is incorrect\n");
                    printf("Game Over");
                    balance += 1101000;
                    return balance;
                }
            }
            else
            {
                system("CLS");
                printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("\t\tKBC:\t ");
                printf("Kaun Banega Crorepati\n");
                printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("\n");
                printf("\n");
                printf("Your Answer is incorrect");
                printf("Game Over");
                balance += 1010000;
                return balance;
            }
        }
        else
        {
            system("CLS");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("\t\tKBC:\t ");
            printf("Kaun Banega Crorepati\n");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("\n");
            printf("\n");
            printf("Your Answer is incorrect");
            printf("Game Over");
            balance += 10000;
            return balance;
        }
    }
    else
    {
        system("CLS");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\t\t\tKBC:\t ");
        printf("Kaun Banega Crorepati\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\n");
        printf("\n");
        printf("Your Answer is incorrect\n");
        printf("Game Over");
        return balance;
    }
}
int medium()
{
    int a, ans1, ans2, ans3, ans4, ans5;
    system("CLS");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t\tKBC:\t ");
    printf("Kaun Banega Crorepati\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n");
    printf("\n");
    printf("What was the name of all the three soccer clubs set up\nwith the help of Mahatama Gandhi in the early 20th century at Durban,\n Pretoria and Johannesburg ?\n");
    system("pause");
    for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
    {
        Sleep(400);

        printf("...........");
    }
    printf("\n<1>\tTruth Seekers\t\t\t");
    printf("<2>\tNon – Violents\n");
    printf("<3>\tPassive Resisters\t\t");
    printf("<4>\tNon co-operators\n");
    printf("Enter Answer\n");
    scanf("%d", &ans1);
    for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
    {
        Sleep(400);

        printf("...........");
    }

    if (ans1 == 3)
    {
        printf("\nYour answer is Correct\n");
        printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
        printf("You Have won 10k rupees\n");
        printf("\n");
        printf("Press any key to get another Quetion\n");
        system("pause");
        system("CLS");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\t\tKBC:\t ");
        printf("Kaun Banega Crorepati\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\n");
        printf("\n");
        printf("Which of these states has had the most number of its\ngovernors become presidents of India?\n");

        for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
        {
            Sleep(400);

            printf("...........");
        }
        printf("\n<1>\tRajasthan\t\t");
        printf("<2>\tBihar\n");
        printf("<3>\tPunjab\t\t\t");
        printf("<4>\tAndra Pradesh\n");
        printf("Enter Answer\n");
        scanf("%d", &ans2);
        for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
        {
            Sleep(400);

            printf("...........");
        }
        if (ans2 == 2)
        {
            printf("\n");
            system("pause");
            printf("\nYour answer is Correct\n");
            printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
            printf("You Have won 1 lac rupees\n");
            printf("\n");
            printf("Press any key to get another Quetion\n");
            system("pause");
            system("CLS");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("\t\tKBC:\t ");
            printf("Kaun Banega Crorepati\n");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("\n");
            printf("\n");
            printf("Who was the Indian bowler off whom Australian legend Don Bradman\ngot a single to reach his 100th first class century?\n");
            system("pause");
            for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
            {
                Sleep(400);

                printf("..........");
            }
            printf("\n<1>\tBaqa Jilani\t\t\t");
            printf("<2>\tCommandur Rangachari\n");
            printf("<3>\tGogumal Kishenchand\t\t");
            printf("<4>\tKanwar Rai Singh\n");
            printf("Enter Answer\n");
            scanf("%d", &ans3);
            for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
            {
                Sleep(400);

                printf("...........");
            }
            if (ans3 == 3)
            {
                printf("\nYour answer is Correct\n");
                printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
                printf("You Have won 1M rupees\n");
                printf("\n");
                printf("Press any key to get another Quetion\n");
                system("pause");
                system("CLS");
                printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("\t\tKBC:\t ");
                printf("Kaun Banega Crorepati\n");
                printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("\n");
                printf("\n");
                printf("‘Which of these Mughal structures was known by the name ‘Rauza-i-Munawwara?\n");
                system("pause");
                for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
                {
                    Sleep(400);

                    printf("...........");
                }
                printf("\n<1>\tShalimar Bagh\t\t\t");
                printf("<2>\tChini Ka Rauza\n");
                printf("<3>\tHumayun’s Tomb\t\t");
                printf("<4>\tTaj Mahal\n");
                printf("Enter Answer\n");
                scanf("%d", &ans4);
                for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
                {
                    Sleep(400);

                    printf("...........");
                }
                if (ans4 == 4)
                {
                    printf("\nYour answer is Correct\n");
                    printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
                    printf("You Have won 1Cr rupees\n");
                    printf("\n");
                    printf("Press any key to get another Quetion\n");
                    system("pause");
                    system("CLS");
                    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    printf("\t\tKBC:\t ");
                    printf("Kaun Banega Crorepati\n");
                    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    printf("\n");
                    printf("\n");
                    printf("In mythology, what was the name of Hiranyakashipu’s wife and Prahlad’s mother?\n");
                    for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
                    {
                        Sleep(400);

                        printf("..........");
                    }
                    printf("\n<1>\tKapinjala\t\t");
                    printf("<2>\tKayadhu\n");
                    printf("<3>\tKamalakshi\t\t");
                    printf("<4>\tKaushiki\n");
                    printf("Enter Answer\n");
                    scanf("%d", &ans5);
                    for (a = 0; a < 10; a++) // Change 'a<?' to how many * you want
                    {
                        Sleep(400);

                        printf("...........");
                    }

                    if (ans5 == 2)
                    {
                        printf("\nYour answer is Correct\n");
                        printf("*-*-*-*-!!CONGRATULATION!!-*-*-*-*\n");
                        printf("You Have won 2Cr rupees\n");
                        printf("\n");
                        printf("Press any key to get another Quetion\n");
                        system("pause");
                        system("CLS");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("\t\tKBC:\t ");
                        printf("Kaun Banega Crorepati\n");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("\n");
                        printf("\n");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("You Have Won:3cr 11lac 10 thousand Rs ");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    }
                    else
                    {
                        system("CLS");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("\t\tKBC:\t ");
                        printf("Kaun Banega Crorepati\n");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("\n");
                        printf("\n");
                        printf("Your Answer is incorrect\n");
                        printf("Game Over");
                        balance += 3101000;
                        return balance;
                    }
                }
                else
                {
                    system("CLS");
                    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    printf("\t\tKBC:\t ");
                    printf("Kaun Banega Crorepati\n");
                    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    printf("\n");
                    printf("\n");
                    printf("Your Answer is incorrect\n");
                    printf("Game Over");
                    balance += 1101000;
                    return balance;
                }
            }
            else
            {
                system("CLS");
                printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("\t\tKBC:\t ");
                printf("Kaun Banega Crorepati\n");
                printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("\n");
                printf("\n");
                printf("Your Answer is incorrect");
                printf("Game Over");
                balance += 1010000;
                return balance;
            }
        }
        else
        {
            system("CLS");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("\t\tKBC:\t ");
            printf("Kaun Banega Crorepati\n");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("\n");
            printf("\n");
            printf("Your Answer is incorrect");
            printf("Game Over");
            balance += 10000;
            return balance;
        }
    }
    else
    {
        system("CLS");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\t\t\tKBC:\t ");
        printf("Kaun Banega Crorepati\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\n");
        printf("\n");
        printf("Your Answer is incorrect\n");
        printf("Game Over");
        return balance;
    }
}