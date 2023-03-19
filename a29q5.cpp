#include<iostream>
using namespace std;
class invent2
{
    int d,e;
public:
    invent2()
    {
        cout<<"DC called"<<endl;
    }
    invent2(int x,int y)
    {
        d=x;e=y;
    }
    void display()
    {
        cout<<"Invent2 "<<d<<","<<e<<endl;
    }
    int getd()
    {
        return d;
    }
    int gete()
    {
        return e;
    }
};
class invent1
{
    int a,b;
public:
    invent1(int x,int y)
    {
        a=x;b=y;
    }
    void display()
    {
        cout<<"Invent1 "<<a<<","<<b<<endl;
    }
    operator float()
    {
        return a+b;
    }
    operator invent2()
    {
        invent2 temp(a,b);
        return temp;
    }
};

int main()
{
    invent1 s1(3,4);
    invent2 d1;
    s1.display();
    float f;
    f=s1;
    cout<<endl<<"f="<<f;
    d1=s1;
    d1.display();
    return 0;
}
