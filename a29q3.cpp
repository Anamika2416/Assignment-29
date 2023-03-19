#include<iostream>
using namespace std;
class item;
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
};
class item
{
    int w,z;
public:
    item(){}
    item(product p)
    {
        w=p.getx();
        z=p.gety();
    }
   void display()
   {
       cout<<"Item "<<w<<","<<z;
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
