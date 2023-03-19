#include<iostream>
using namespace std;
class duration
{
    int sec;
public:
    duration(){}
    duration(int x)
    {
        sec=x;
    }
    void setdata(int a)
    {
        sec=a;
    }
    int getdata()
    {
        return sec;
    }
    void display()
    {
        cout<<endl<<"Seconds :"<<sec;
    }
};
class time
{
    int hour,min,secnd;
public:
    time(){}
    time(int h,int m,int s)
    {
        hour=h;
        min=m;
        secnd=s;
        if(secnd>=60)
        {
           if(s==60)
              {
                  secnd=0;
                  min=min+secnd/60;

              }
           else
           {
               secnd=secnd%60;
               min=min+secnd/60;
           }
        }
        if(min>=60)
        {
            if(min==60)
              {
                  min=0;
                  hour=hour+min/60;

              }
           else
           {
               min=min%60;
               hour=hour+min/60;
           }
        }
    }
    time(duration d)
    {
        secnd=d.getdata();
        hour=secnd/3600;
        secnd=secnd%3600;
        min=(secnd/60);
        secnd=secnd%60;
        if(secnd>=60)
        {
           if(secnd==60)
              {
                  secnd=0;
                  min=min+secnd/60;

              }
           else
           {
               secnd=secnd%60;
               min=min+secnd/60;
           }
        }
        if(min>=60)
        {
            if(min==60)
              {
                  min=0;
                  hour=hour+min/60;

              }
           else
           {
               min=min%60;
               hour=hour+min/60;
           }
        }
    }
    void display()
    {
        cout<<endl<<hour<<":"<<min<<":"<<secnd<<endl;
    }
};
int main()
{
    duration d1(3701);
    time t;
    t=d1;
    d1.display();
    t.display();

}
