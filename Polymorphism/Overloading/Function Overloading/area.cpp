//using function overloading to calculate area of square and volume of rectangle.(with class)

#include<iostream>
using namespace std;

class Areav
{
    public:

    int area(int l)
    {
        return(l*l);
    }
    int area(int l,int b) //area of rectangle
    {
        return(l*b);
    }
    int volume(int l,int b,int h)
    {
        return(l*b*h);
    }
};
int main()
{
    Areav obj1,obj2,obj3;
    cout<<"Area of Square = "<<obj1.area(5)<<endl;
    cout<<"Area of Rectangle = "<<obj2.area(10,20)<<endl;
    cout<<"Volume of Rectangle = "<<obj3.volume(5,10,2)<<endl;
    return 0;
}