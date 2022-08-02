#include<iostream>
using namespace std;

class Student
{
    char name[50];
    int roll;
    public:
    void read()
    {
        cout<<"\nEnter the name of the student : ";
        cin>>name;
        cout<<endl<<"Enter the roll no ;";
        cin>>roll;
        cout<<endl;
    }
    void display()
    {
        cout<<"Name = "<<name<<endl<<"Roll no = "<<roll<<endl;
    }

};

int main()
{
    Student *sptr=new Student;
    cout<<"Enter details of student :"<<endl;
    sptr->read();
    sptr->display();
    delete sptr;
    sptr=NULL;
    return 0;
}