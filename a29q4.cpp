//using typecasting operator
#include<iostream>
using namespace std;
class item
{
    int w,z;
public:
    item(){}
    item(int x,int y)
    {
       w=x;
       z=y;
    }
    int getw()
    {
        return w;
    }
    int getz()
    {
        return z;
    }
   void display()
   {
       cout<<"Item "<<w<<","<<z;
   }
};
class product
{
    int x;
    int y;
public:
    void setdata(int a,int b)
    {
        x=a;
        y=b;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    void display()
    {
        cout<<"x="<<x<<"y="<<y<<endl;
    }
    operator item()
    {
        item temp(x,y);

        return temp;
    }
};

int main()
{
    product c;
    c.setdata(7,4);
    item i;
    i=c;
    i.display();
    return 0;
}

