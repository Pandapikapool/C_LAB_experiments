#include<stdio.h>
FILE *p;
struct inventory{                                                  //defining Structure for inventory with variables for asset no. , name and price
    int asset_no;
    char name[10];
    float price;
};
int main()
{
    struct inventory i;                                                //declaring structure variable
    char choice;
    int loop;
    p=fopen("Inventory.txt","w");                                   //opening the file to save
    if(p==NULL)
    {
        printf("FILE DOESNOT EXIST\n");                              //printing error message for the file that doesn't exist
    }
    do
    {
        printf("Enter the asset number :");                             //Entering the new asset number from user
        scanf("%d",&i.asset_no);
        fprintf(p,"Asset Number : %d\n",i.asset_no);
        printf("Enter the asset name :");                           //Entering the new asset name from user
        getchar();
        scanf("%s",&i.name);
        fprintf(p,"Asset Name : %s\n",i.name);
        printf("Enter the asset price :");                          //Entering the new asset price from user
        scanf("%f",&i.price);
        fprintf(p,"Asset Price : %.2f\n",i.price);
        printf("Do you want to add another asset :");               //asking for new assets if there
        getchar();
        scanf("%c",&choice);
        if(choice=='y'||choice=='Y')
        {
            loop=1;
        }
        else
        {
            loop=0;
        }
    }while(loop);
    printf("*******Thank You********");
}
