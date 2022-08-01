//Program to convert object of type Distance thet has attributes feet & inches to meters that has floating value.

#include<iostream>
using namespace std;

class Distance
{
    int feet,inches;
    public:
    Distance(){};
    Distance(int f,int i)
    {
        feet = f;
        inches = i;
    }
    void display()
    {
        cout<<"Feet = "<<feet<<endl<<"Inches = "<<inches<<endl;
    }
    operator float()
    {
        return((feet/3.28084)+((inches/12)/3.28084));
    }
};
int main()
{
    Distance dobj(5,12);
    float meters;
    meters=dobj;
    cout<<"Distance in feet and inches "<<endl;
    dobj.display();
    cout<<"Equivalent distance in meters = "<<meters<<endl;
    return 0;
}