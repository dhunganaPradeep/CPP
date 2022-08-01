// Overload binary + operator to concatenate two strings and overload equality operator to compare two strings.

#include<iostream>
#include<string.h>
using namespace std;

class StringA
{
    char str[50];
    public:
    void read()
    {
        cout<<"Enter a string : "<<endl;
        cin>>str;
    }
    void display()
    {
        cout<<"The string is : "<<str<<endl;
    }
    StringA operator +(StringA s)
    {
        char temp[50];
        strcpy(temp,this->str);
        strcat(temp,s.str);
        return temp;
    }
    int operator=(StringA s)
    {
        if(strcmp(this->str,s.str)==0)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
}; 
int main()
{
      StringA s1,s2,s3;
    s1.read();
    s2.read();
    s1.display();
    s2.display();
    cout<<"Concatenated string is"<<endl;
    s3=s1+s2;
    s3.display();
    if(s1=s2)
    {
        cout<<"Hello world";
    }
    else{
        cout<<"bye";
    }
    return 0 ;
}