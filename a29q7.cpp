#include<iostream>
using namespace std;
class time
{
    int hour,min;
public:
    time(){}
    time(int h,int m)
    {
        hour=h;
        min=m;
    }
    int geth()
    {
        return hour;
    }
    int getm()
    {
        return min;
    }
    void display()
    {
        cout<<"hour ="<<hour<<" Minute="<<min<<endl;
    }
};
class minute
{
    int minu;
public:
    minute(){}
    minute(int m)
    {
        minu=m;
    }
    operator=(time t)
    {

        minu=t.geth()*60+t.getm();

    }
    void display()
    {
        cout<<"Minute="<<minu<<endl;
    }
};
int main()
{
 time t1(2,30);
 t1.display();
 minute m1;
 m1.display();
 m1=t1; // Fetch minute from time
 t1.display();
 m1.display();
 return 0;
}
