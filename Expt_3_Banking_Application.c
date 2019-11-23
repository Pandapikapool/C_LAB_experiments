#include<stdio.h>
#define N 5
struct account{
    long int accno;
    char name[20];
    char type;
    float bal;
}custmer[5]={{101,"Vaibhav",'S',10000},
            {102,"Mahesh",'S',12000},
            {103,"Omkar",'S',14000},
            {104,"Shrihari",'C',9000},
            {105,"Shubham",'C',2000}
}; //structure defined for account information
int accin; //index
float amount; //variable to hold ammount


void deposit()
{
    printf("Enter the amount = ");
    scanf("%f",&amount);
    printf("\n");
    custmer[accin].bal=custmer[accin].bal+amount;
    balance();
} //function for deposit money

void withdraw()
{
    printf("Enter the amount = ");
    scanf("%f",&amount);
    printf("\n");
    if(amount>custmer[accin].bal)
    {
        printf("Amount excceds balance\n");
        return;
    }
    custmer[accin].bal=custmer[accin].bal-amount;
    balance();
} //function for withdraw money

void balance()
{
    printf("Balance = %f\n",custmer[accin].bal);
}
// function to show balance
int main()
{
    int accnum,i,ch,f=0;
    start :
    printf("Enter the Account number= ");
    scanf("%d",&accnum);
    for(i=0;i<N;i++)//check for existance of the account
    {
        if(accnum==custmer[i].accno)
        {
            accin=i;
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("\nInvalid Account number  \n");
        goto start;
    }

    printf("Account number= %d\nName : %s\nAccount type=  %c\nBalance = %f\n",custmer[accin].accno,custmer[accin].name,custmer[accin].type,custmer[accin].bal);
      while(1)
    {
        printf("\nEnter your choice\n1 : Balance Inquiry\n2 : Deposit Amount \n3 : Withdraw Amount\n4 : Exit\n");
        scanf("%d",&ch);
        switch(ch) //switch case for options selected wrt choice
        {
            case 1:balance();break;
            case 2:deposit();break;
            case 3:withdraw();break;
            case 4:exit(0);
            default:printf("Enter the correct choice");break;
        }
   }
}

