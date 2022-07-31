//maximum of two values and three values

#include<iostream>
using namespace std;

template<typename T>
T maximum(T a,T b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
template<typename T>
T maximum(T a,T b, T c)
{
    if(a>b&&a>c)
    {
        return a;
    }
    else if(b>c)
    {
        return b;
    }
    else{
        return c;
    }
}
template<typename T>
void display(T max)
{
    cout<<"Maximum is : "<<max<<endl;
}

int main()
{
    int max;
    max= maximum<int>(10,20,5);
    display(max);
    double dmax;
    dmax= maximum<double>(1.2,2.2);
    display(dmax);
    return 0;
}