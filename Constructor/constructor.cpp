//constructor example

#include<iostream>
using namespace std;

class Base
{
    int a,b;
    public:
    Base()
    {
        cout<<"Default constructor"<<endl;;

    }
    Base(int a,int b)
    {
        this->a=a;
        this->b=b;
        cout<<"Parameterized constructor called"<<endl;
    }
    Base (Base& c)
    {
        a=c.a;
        b=c.b;
    }
    void display()
    {
        cout<<"a = "<<a<<"b = "<<b<<endl;
    }
};
int main()
{
    Base b1;//CALLS DEFAULT CONSTRUCTOR
    Base b2(5,11);//CALLS PARAMETERIZED CONSTRUCTOR
    Base b3(b2);//CALLS COPY CONSTRUCTOR
    b1.display();
    b2.display();
    b3.display();
    return 0;
}