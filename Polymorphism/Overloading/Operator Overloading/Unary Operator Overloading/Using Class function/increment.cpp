// increment operator to add vector (post(var++)/prefix(++var) increment )

#include<iostream>
using namespace std;

class Hello
{
    int a,b,c;
    public:
    Hello(){
        cout<<"Enter the value of a,b & c:"<<endl;
        cin>>a>>b>>c;
    }
    Hello(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void operator ++()
    {
        ++a;  //for unary minus(-) ; a=-a;
        ++b;  
        ++c;  
       // (PostFix) a++;
       // (PostFix) b++;
       // (PostFix) c++;
    }
    void display()
    {
        cout<<a<<"i+"<<b<<"j+"<<c<<"k"<<endl;
    }
};
int main()
{
    Hello h1;
    cout<<"Before increment"<<endl;
    h1.display();
    cout<<"After increment"<<endl;
    ++h1; //h1++(PostFix)  
    h1.display();
    return 0;
}