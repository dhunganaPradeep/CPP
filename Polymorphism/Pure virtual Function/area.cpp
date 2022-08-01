//area of rectangle and triangle

#include<iostream>
#include<cmath>
using namespace std;

class Shape
{
    protected:
    float width,height;
    public:
    void read()
    {
        cout<<"Enter the width and height : "<<endl;
        cin>>width>>height;
    }
    virtual void area()=0;
};
class Rectangle:public Shape
{
    public:
    void area()
    {
        cout<<"Area of Rectangle = "<<(width*height)<<endl;
    }
};
class Triangle:public Shape
{
    void area()
    {
        cout<<"The area of Triangle = "<<((1/2)*width*height)<<endl;
    }
};
int main()
{
    Shape *sptr;
    Rectangle robj;
    sptr=&robj;
    sptr->read();
    sptr->area();
    Triangle tobj;
    sptr=&tobj;
    sptr->read();
    sptr->area();
    return 0;
}
