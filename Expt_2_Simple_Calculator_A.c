#include<stdio.h>
float add(float a,float b)                                                                      //Defining the addition of two numbers Function
{
    return(a+b);
}
float sub(float a,float b)                                                                       //Defining the subtraction of two numbers Function
{
    return(a-b);
}
float mul(float a,float b)                                                                       //Defining the multiplication of two numbers Function
{
    return(a*b);
}
float div(float a,float b)                                                                          //Defining the Division of two numbers Function
{
    return((float)a/b);
}
void display(char choice,float a,float b,float ans)                                               //Defining the displaying the answer Function
{
    printf("%.3f %c %.3f is : %.2f",a,choice,b,ans);
}
int main()                                                                                         //main function
{
    float a,b,ans;
    unsigned char choice;
    printf("Enter the value of a and b :");                                                         //taking two values from user
    scanf("%f%f",&a,&b);
    pass :
    printf("Enter the operation'+';'-';'/' or '*'  to be performed on %.3f and %.3f :",a,b);        //asking which operation to be done on those two numbers
    getchar();
    choice = getchar();
    switch(choice)                                                                                   //using switch to choose the operation correctly
    {
        case'+' :
            ans=add(a,b);
            break;
        case'-' :
            ans=sub(a,b);
            break;
        case'*' :
            ans=mul(a,b);
            break;
        case'/' :
            ans=div(a,b);
            break;
        default :
            printf("The choice entered is INCORRECT\nPlease enter the correct choice\n");               //printing error message for wrong option.
    }
    printf("The answer is : %.2f",ans);
    printf("\n");
    goto pass;
}

