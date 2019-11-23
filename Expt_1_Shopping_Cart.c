#include<stdio.h>
#include<stdlib.h>
void additem();
void deleteitem();
void updatebill();
void displaycart();

int stock[5][3]={{0,0,0},{1,12,150},{2,15,100},{3,17,200},{4,25,300}};              //Initializing the Stocks of products
typedef struct{
     int code;
int quantity;
    float cost;
}cartitems;
cartitems c[10];                                                                    //array of structure
int inum=0;
float total=0;

int main()
{
int i,j,n,choice;                                                                   //Show User the choice
do{
printf("\n\nItem code\tQuantity\tPrice\n");
        for(i=1;i<5;i++)
        {
            for(j=0;j<3;j++)
printf("%d\t\t",stock[i][j]);
printf("\n");
        }
printf("\n Please enter your choice:");                                             //Ask user The choice
printf("\n\n1:Add item to cart \n2:Delete item from cart \n3:Display\n4:Exit:");
scanf("%d",&choice);

    switch(choice)
    {
        case 1:additem();                                                           //Calling ADD item function
            break;
        case 2:deleteitem();                                                        //Calling Delete item function
            break;
        case 3:displaycart();                                                       //Calling Display cart function
            break;
        default: exit(0);                                                              //Exit program
    };
}while(1);
    return 0;
}
void additem()                                                                        //Function definition  of Deleting item
{
printf("\n You have called Additem\n");                                              //adding the user's choice item
printf("\nEnter the code and quantity of the item to be added to your cart:");
scanf("%d %d",&c[inum].code,&c[inum].quantity);

    c[inum].cost=c[inum].quantity*stock[c[inum].code][2];

printf("\nThe item with code %d is added to the cast\n", c[inum].code);
printf("\n Your cart contains:-\n");                                                    //Showing the updated cart
printf("\n Item code\t Quantity\tCost\n");
    printf("%d\t\t%d\t\t%0.2f",c[inum].code,c[inum].quantity,c[inum].cost);

    stock[c[inum].code][1]=stock[c[inum].code][1]-c[inum].quantity;
inum++;
updatebill();
    return;
}

void deleteitem()                                                                   //Function definition  of Deleting item
{
printf("\n Your have called deleteitem()\n");
printf("\n Last item from your cart deleted\n");
inum--;

    stock[c[inum].code][1]=stock[c[inum].code][1]+c[inum].quantity;                 //deleting the user's choice item
updatebill();
    return;
}
void updatebill()                                                               //update the bill
{
int i;
    total=0;
printf("\n You have called updatebill\n");
printf("\n There are %d items in your cart.\n\n",inum);

    for(i=0;i<inum;i++)
        total=total+c[i].cost;
    return;
}

void displaycart()                                                                 //defining the display cart
{
int i;
printf("\n You have called displaycart()\n");
printf("\n There are %d items in your cart...\n\n",inum);
printf("\n Itemcode\tQuantity\tAmount\n");

    for(i=0;i<inum;i++)
printf("\n%d\t\t%d\t\t%5.2f",c[i].code,c[i].quantity,c[i].cost);
printf("\n\n\n\t\t\tGrand total is:%5.2f\n",total);
    return;
}
