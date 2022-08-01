//Rectangular to polar using conversion routine in destination class

#include<iostream>
#include<cmath>
using namespace std;

class Rectangular
{
    double xco,yco;
    public:
    Rectangular(){};
    Rectangular(double x, double y)
    {
        xco=x;
        yco=y;
    }
    void display()
    {
        cout<<"X-coordinates = "<<xco<<endl<<"Y-coordinates = "<<yco<<endl;
    }
    double getx()
    {
        return xco;
    }
    double gety()
    {
        return yco;
    }
};

class Polar
{
    double radius,angle;
    public:
    Polar(){};
    Polar(double r,double a)
    {
        radius=r;
        angle=a;
    }
    void display()
    {
        cout<<"Radius = "<<radius<<endl<<"Angle = "<<angle<<endl;
    }
    Polar(Rectangular R)
    {
        radius=sqrt((R.getx()*R.getx())+(R.gety()*R.gety()));
        angle=atan(R.gety()/R.getx());
    }
};

int main()
{
    Rectangular robj(10,20);
    Polar pobj;
    pobj=robj;
    pobj.display();
    robj.display();
    return 0;
}