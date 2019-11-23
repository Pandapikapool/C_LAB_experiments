#include<iostream>
using namespace std;
class Complex{                                                            //declaring class real and imaginary numbers
private :
    int re,im;
public :
    void getdata()                                                        //defining function taking values from user
    {
        cout<<"Enter the first complex number :"<<endl;
        cin>>re;
        cin>>im;
    }
    void showdata()                                                        //defining function to show the display data
    {
        cout<<re<<"+"<<im<<"i"<<endl;
    }
    void add(Complex c1,Complex c2)                                        //defining function to add the complex number
    {
        re=c1.re+c2.re;
        im=c1.im+c2.im;
    }
};
int main()                                                                  //main function
{
    Complex c1,c2,c3;
    c1.getdata();                                                           //calling get data function
    cout<<"The first complex number is : "<<endl;
    c1.showdata();                                                          //calling display data function
    c2.getdata();                                                           //calling get data function
    cout<<"The second complex number is : "<<endl;
    c2.showdata();                                                          //calling display data function
    c3.add(c1,c2);                                                          //adding the complex numbers
    cout<<"The sum of two complex numbers is :"<<endl;
    c3.showdata();                                                          //calling display data function
}
