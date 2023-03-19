#include<iostream>
using namespace std;
class complex
{
    int real,img;
public:
    complex(){}
    complex(int a)
    {
       real=a;
       img=a;
    }

    void display()
    {
        cout<<"real= "<<real<<" img = "<<img;
    }
};
int main()
{
    complex c1;
    int x=5;
    c1=x;
    c1.display();
    return 0;
}
