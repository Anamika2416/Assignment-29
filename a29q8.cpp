#include<iostream>
using namespace std;
class Rupee
{
    int rup;
public:
    Rupee(){}
    Rupee(int r)
    {
        rup=r;
    }
    operator int()
    {
        int x;
        x=rup;
        return x;
    }
    void display()
    {
        cout<<"rupee is = "<<rup<<endl;
    }
};
int main()
{
 Rupee r = 10;
 int x = r;
cout<<x<<endl;;
r.display();
 return 0;
}
