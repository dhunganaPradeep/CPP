//WAP to add time that takes two objects of Time as argument. Returning object as argument.

#include<iostream>
using namespace std;

class Time
{
    int hr,min,sec;
    public:
    void read()
    {
        cout<<"Enter time in format of hour minute and second."<<endl;
        cin>>hr>>min>>sec;
    }
    void display()
    {
        cout<<"The resultant time is : "<<hr<<":"<<min<<":"<<sec<<endl;
    }
    void addTime(Time,Time);
};
void Time::addTime(Time t1,Time t2)
    {
        sec=t1.sec+t2.sec;
        min=sec/60;
        sec=min%60;
        min=t1.min+t2.min;
        hr=min/60;
        min=min%60;
        hr+=t1.hr+t2.hr;
        cout<<"The time is : "<<hr<<":"<<min<<":"<<sec<<endl;
    }
int main()
{
    Time t1,t2,t3;
    t1.read();
    t2.read();
    t1.display();
    t2.display();
    t3.addTime(t1,t2);
    return 0;
}
