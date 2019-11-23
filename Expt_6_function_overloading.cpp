//Area of circle, rectangle and triangle using function overloading
#include<iostream>
using namespace std;
const float pi=3.14;    //Global declaration
class area{
    float ar1,ar2,ar3;
public :
    void are(float r)
    {
        ar1=(pi*r*r);   //Find area of circle
    }
    void are(float n,float a,float b)
    {
        ar2=(n*a*b);    //Find area of triangle
    }
    void are(float lr,float br)
    {
        ar3=(lr*br);    //Find area of rectangle
    }
    void display()      //displaying the area of circle, rectangle and triangle
    {
        cout<<"Area of circle : "<<ar1<<endl;
        cout<<"Area of rectangle  : "<<ar3<<endl;
        cout<<"Area of triangle  : "<<ar2<<endl;
    }
};
int main()
{
    float lr,br,c,b,r;
    area a;
    cout<<"Enter the radius : "<<endl;
    cin>>r;                                         //entering radius r
    cout<<"Enter the length and breadth :"<<endl;
    cin>>lr>>br;                                    //entering length lr and breadth br
    cout<<"Enter the height and base :"<<endl;
    cin>>c>>b;                                      //entering height c and base b
    a.are(r);           //calling function for area of circle
    a.are(0.5,c,b);     //calling function for area of triangle
    a.are(lr,br);       //calling function for area of rectangle
    a.display();
}
