//area of rectangle using class template

#include<iostream>
using namespace std;

template<typename T>
class Rectangle
{
    T length;
    T breadth;
    public:
    Rectangle(){};
    Rectangle(T l,T b)
    {
        length=l;
        breadth=b;
    }
    void area();
};
template<typename Ram>
void Rectangle<Ram>::area()
{
    cout<<"Area = "<<length*breadth<<endl;
}

int main()
{
    Rectangle<int>robj(10,20);
    robj.area();
    Rectangle<double>robj2(11.2,12.3);
    robj2.area();
    return 0;
}