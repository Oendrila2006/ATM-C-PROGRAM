#include<stdio.h>
int main()
{
    int choice;
    float balance =1000.0;
    float amount;
    while(1)
    {
        printf("----ATM MENU----\n");
        printf("check balance\n");
        printf("deposit\n");
        printf("withdraw\n");
        printf("exit\n");
        printf("ENTER YOUR CHOICE\n");

        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("your bank balance is :%2f\n",balance);
            break;
            case 2:
            printf("write the amount :");
            scanf("%2f",&amount);
            if(amount>0)
            

            {
                balance=balance+amount;

                printf("deposited succcesfully\n");
                printf("your bbalance is%2f",balance);

            }
            else
            {
                printf("invalid deposit\n");

            }
            break;
            case 3:
            printf("ENTER THE AMOUNT TO withdraaw\n");
            scanf("%2f",&amount);
            if(amount>balance)
            {
                printf("INVALID TRANSACTION\n");

            }
            else
            {
                balance=balance-amount;
 
                printf("amount deposited\n");
                printf("your remaining balance is %2f\n",balance);
                
                
                

            }
            break;
            case 4:
            printf("THANK YOU FOR USING ATM MACHINE\n");
            return 0;
            default:
            printf("invalid choice . please try again.\n");
        }
        return 0;








    }









}