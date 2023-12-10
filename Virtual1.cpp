#include<iostream>
using namespace std;

class base 
{
   public:
   int i,j,k;
   void Fun()
   {
    cout<<"Inside base calss\n";
   }
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
  base bobj;
  Derived dobj;

  cout<<sizeof(bobj)<<"\n";
  cout<<sizeof(dobj)<<"\n";

  bobj.Fun();

  dobj.Fun();
  dobj.Gun();


    return 0;
}