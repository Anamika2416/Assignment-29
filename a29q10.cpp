#include<iostream>
using namespace std;
class Dollar
{
    float dol;
public:
    Dollar(){cout<<"DC of dollar"<<endl;}
    Dollar(float d)
    {
        cout<<"PC of dollar "<<endl;
        dol=d;
    }
    float getD()
    {
        return dol;
    }
    void setdata(float x)
    {
        dol=x;
    }
    operator float()
    {
        cout<<"Float()"<<endl;
        return dol;
    }
    void display()
    {
        cout<<"Dollar = "<<dol<<endl;
    }
};
class Rupee
{
    float rup;
public:
    Rupee(){cout<<"DC of rupee"<<endl;}
    Rupee(float x)
    {
        cout<<"DC of rupee"<<endl;
        rup=x;
    }
    Rupee(Dollar d1)
    {
        cout<<"Rupee"<<endl;
        rup=d1.getD()*100;
    }
    operator Dollar()
    {
        cout<<"Dollar"<<endl;
        return rup/100;
    }
    void display()
    {
        cout<<"Rupee = "<<rup<<endl;
    }

};

int main()
{
 Rupee r = 23;
Dollar d1;
d1= r; // Rupee to Dollar conversion
d1.display();
r.display();
r = d1; // Dollar to Rupee Conversion
d1.display();
r.display();
 return 0;
}
