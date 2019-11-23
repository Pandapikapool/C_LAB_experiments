#include<iostream>
using namespace std;
class Manager{                                                          //declaring class of name ,dept, empid, bonus
protected :
    string name;
    string dept;
    int empid;
    int bonus;
public :
    void getdata()                                                      //defining function taking values from user
    {
        cout<<"Enter name : "<<endl;
        cin>>name;
        cout<<"Enter Department : "<<endl;
        cin>>dept;
        cout<<"Enter empid : "<<endl;
        cin>>empid;
    }
    void setbonus(int b)
    {
        bonus=b;
        cout<<"\nDepartment : "<<dept<<"\nBonus : "<<bonus<<endl;      //defining set bonus function
    }
    void display(int n)
    {
        cout<<"\n Name : "<<name<<endl;
        cout<<"\n Department : "<<dept<<endl;
        cout<<"\n No. of employees : "<<n<<endl;
        cout<<"\n Bonus : "<<bonus<<endl;
    }
};
class prodman : public Manager{                                        //declaring hierarchy of previous class adding number of supervisors
    int noOfsup;
public :
    void manageprod(int n)
    {
        noOfsup=n;
        cout<<"\nNo. of supervisors : "<<noOfsup<<endl;
        display(noOfsup);
    }
};
class salesman : public Manager{                                       //declaring hierarchy of previous class adding number of salesman
    int noOfsalesmen;
public :
    void managesales(int n)
    {
        noOfsalesmen=n;
        cout<<"\nNo. of salesmen : "<<noOfsalesmen<<endl;
        display(noOfsalesmen);
    }
};
int main()
{
    prodman p;                                                          //declaring the local variables of prodman and salesman
    salesman s;
    p.getdata();                                                        //calling getdata from prodman
    s.getdata();                                                        //calling getdata from salesman
    p.setbonus(5000);                                                   //calling setdata from prodman
    s.setbonus(3000);                                                   //calling setdata from salesman
    p.manageprod(100);                                                  //calling manageprod from prodman
    s.managesales(50);                                                  //calling managesales from salesman
}
