//multiple parameters of generic type

#include<iostream>
using namespace std;
template<typename T1,typename T2, typename T3>
class Rectangle
{
    T1 length;
    T2 breadth;
    T3 height;
    public:
    Rectangle(){};
    Rectangle(T1 l,T2 b,T3 h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    void volume();
};
template<typename A,typename B,typename C>
void Rectangle<A,B,C>::volume()
{
    cout<<"Volume = "<<length*breadth*height<<endl;
}
int main()
{
    Rectangle<int,int,int>robj(10,20,30);
    robj.volume();
    Rectangle<double,double,double>robj2(11.2,12.2,13.2);
    robj2.volume();
    return 0;
}