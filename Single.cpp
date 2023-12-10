#include<iostream>
using namespace  std;

class Demo
{
    public:
    int x,y;

    Demo()
    {
        cout<<"Inside Demo Constructor";
        x = 9;
        y = 12;
        
    }
    ~Demo()
    {
        cout<<"Inside Demo Distructor";
    }
    void Fun()
    {
     cout<<"Inside fun of Demo\n";
    }  
};

class Hello : public Demo
{
   public:
     int a,b,c;
    Hello()
    {
        cout<<"Inside Hello Distructor\n";
        a = 30;
        b = 40;
        c = 50;
    }
    ~Hello()
    {
        cout<<"Inside Hello Distructor\n";
    }
     void nun()
    {
        cout<<"Inside nun of Hello\n";
    }
};

int main()
{
   Hello hobl;
   cout<<"sizeof(h'obj)\n";
   cout<<"hobj.x"<<"\n";
   cout<<"hobj.y"<<"\n";
   cout<<"hobj.a"<<"\n";
   cout<<"hobj.b"<<"\n";
   cout<<"hobj.c"<<"\n";

    return 0;
}
