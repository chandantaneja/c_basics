#include <stdio.h>
#include <stdlib.h>

void main()
 {
    int simtype, num, sms, local, std, cost_sms, cost_std, cost_local, usage ;
    int cc, plan, subusage, rent,zone,tax,totalusage;
    char name[20];
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tWELCOME TO XYZ Service Provider");
    printf("\n\n\n\n\n\t\t\t       Enter Your Choice:");
    printf("\n\n\n\t\t 1.PREPAID");
    printf("\n\n\t\t 2.POSTPAID");
    printf("\n\n\n\t\t\t\t Your Simtype:\t");
    scanf("%d", &simtype);

    if(simtype==1){
        printf("\n\n\t\t You are not eligible for Bill.");
    }
    else if(simtype==2){
        printf("\n\n\n\t\t\t       Enter Your Name             :\t");
        fflush(stdin);
        gets(name);
        printf("\n\n\n\t\t\tEnter Your Mobile Number          :\t");
        scanf("%d", &num);

        getch();
        system("cls");
        printf("\n\n\n\t\t\t %s,  Welcome to XYZ Billing System", name);

        printf("\n\n\n\n\n\n\t\t\t Enter number of SMS             :\t");
        scanf("%d", &sms);
        printf("\n\n\t\t\t Enter number of Local Calls     :\t");
        scanf("%d", &local);
        printf("\n\n\t\t\t Enter number of STD calls       :\t");
        scanf("%d", &std);
        cost_sms=sms*1;
        cost_local=local*1;
        cost_std=std*1.5;
        usage=cost_sms+cost_local+cost_std;
        printf("\n\n\n\n\t\t\t\t              Total  =  \t%d/-", usage);
        getch();
        system("cls");
        if (usage<300)
            cc=50;
        else if (usage<500)
            cc=70;
        else
            cc=100;
        printf("\n\n\n\t\t\t 1.Monthly");
        printf("\n\n\n\t\t\t 2.Yearly");
        printf("\n\n\n\t\t\t 3.Lifetime");
        printf("\n\n\n\n\n\t\t Enter Your Plan Type: \t");
        scanf("%d", &plan);

        if(plan==1)
            rent=70;
        else if(plan==2)
            rent=60;
        else if (plan==3)
            rent=50;

        subusage=usage+cc+rent;
        printf("\n\n\n\t\t\t       Sub Usage   = \t%d/-", subusage);

        getch();
        system("cls");

        printf("\n\n\n\t\t\t 1. NCR");
        printf("\n\n\n\t\t\t 2. Others");
        printf("\n\n\n\n\t\t Enter Your Zone:\t");
        scanf("%d", &zone);

        if (zone==1)
           tax=subusage*0.10;
        else if (zone==2)
           tax=subusage*0.08;

        totalusage=subusage+tax;
        printf("\n\n\n\t\t\t Your Total Usage:\t%d/-", totalusage);
        getch();
        system("cls");
        printf("\n\n\n\n\t\t\t\t\t\t\tPress any key to print your Bill.");
        getch();
        system("cls");
        printf("\n\n\t\t\t    \t******************************************************************************************************");
        printf("\n\t\t\t\t\t\t\t\t\t\t XYZ Billing System");
        printf("\n\n\t\t\t    \t******************************************************************************************************");
        printf("\n\n\n\t\t\t\t\t\t\t\t\t   CUSTOMER DETAILS:");
        printf("\n\n\n      \t\t\t\t\t\tName:  %s \t\t Mobile Number:  %d ", name, num);
        printf("\n\n                 \t\t ________________________________________________________________________________________________________");
        printf("\n\n\n\t\t\t\t\t\t No. of SMS                                         : %d/-", sms);
        printf("\n\t\t\t\t\t\t No. of LOCAL CALLS                                  : %d/-", local);
        printf("\n\t\t\t\t\t\t No. of STD CALLS                                    : %d/-", std);
        printf("\n                 \t\t ______________________________________________________________________________________________________");
        printf("\n\n\t\t\t\t\t\t Cost per SMS                                        : %d/-", cost_sms );
        printf("\n\t\t\t\t\t\t Cost of Local Call                                  : %d/-", cost_local);
        printf("\n\t\t\t\t\t\t Cost of STD Call                                    : %d/-", cost_std);
        printf("\n                 \t\t ______________________________________________________________________________________________________");
        printf("\n\n\n\t\t\t\t\t\t Usage                                             : %d/-", usage);
        printf("\n                 \t\t ______________________________________________________________________________________________________");
        printf("\n\n\t\t\t\t\t\t CC                                                : %d/-", cc);
        printf("\n                 \t\t ______________________________________________________________________________________________________");
        printf("\n\n\t\t\t\t\t\t Rent                                              : %d/-", rent);
        printf("\n                 \t\t ______________________________________________________________________________________________________");
        printf("\n\n\n\t\t\t\t\t\t Net Payable Amount                              : %d/-", totalusage);
        getch();
        system("cls");
    }
    else printf("Invalid Choice.");

 }
