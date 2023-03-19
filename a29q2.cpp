
#include<iostream>
using namespace std;
class complex
{
    int real,img;
public:
    complex(){}
    complex(int a,int b)
    {
       real=a;
       img=b;
    }

    void display()
    {
        cout<<"real= "<<real<<" img = "<<img<<endl;
    }
    operator int()
    {
        cout<<"integer";
        return (real+img);
    }
  explicit    operator long()//it will only work when we write long explicitly
    {
        cout<<"long";
        return (real+img);
    }
};
int main()
{
    complex c1(4,5);
    c1.display();
    int x=c1;
    cout<<(long)c1;//yaha complier ko pta nhi chlega ki long me krna hai yaa int me isliye explicitly btana prega
    //directly complex ko int me convert hone wala function call hoga
   // c1.display();
    return 0;
}
