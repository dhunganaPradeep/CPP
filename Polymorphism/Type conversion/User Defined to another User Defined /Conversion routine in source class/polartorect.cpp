//Polar to rectangular using conversion routine in source class

#include<iostream>
#include<cmath>
using namespace std;

class Rectangular
{
    double x,y;
    public:
    Rectangular(){};
    Rectangular(double xco,double yco)
    {
        x=xco;
        y=yco;
    }
    void display()
    {
        cout<<"X = "<<x<<"\nY = "<<y<<endl;
    }
};
class Polar
{
    double r,a;
    public:
    Polar(){};
    Polar(double r,double a)
    {
        this->r=r;
        this->a=a;
    }
    void display()
    {
        cout<<"R = "<<r<<"\nA = "<<a<<endl;
    }
    operator Rectangular()
    {
        double x,y;
        x=r*cos(a);
        y=r*sin(a);
        Rectangular Robj(x,y);
        return Robj;
    }
};
int main()
{
    Polar pobj(10,20);
    Rectangular robj;
    robj=pobj;
    robj.display();
    pobj.display();
    return 0;
}