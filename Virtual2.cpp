#include<iostream>
using namespace std;

class base 
{
   public:
   int i,j,k;

};

class Derived : public base
{
  public:
   int a,b;
   void Gun()
   {
    cout<<"Inside derived gun\n";
   }
};

int main()
{
  Base *bp1 = new Base;
  Derived *dp1 = new Derived;
  Base *bp1 = new Derived;
  Derived *dp2 = new Base;

    return 0;
}