#include<iostream>
using namespace std;

class base 
{
   public:
   int i,j,k;
   void Fun()
{ cout<<"Inside Base Fun\n";}
   void Sun()
{ cout<<"Inside Base Sun\n";}
   void gun()
{ cout<<"Inside Base Gun\n";}
  void Run()
{ cout<<"Inside Base Run\n";}

};

class Derived : public base
{
  public:
   int a,b;
   void Gun()
   {  cout<<"Inside derived gun\n"; }
   void Run()
    {  cout<<"Inside derived Run\n"; }
   
};

int main()
{
  base *bp = new base;
  bp->Fun();
  bp->gun();
  bp->Sun();
  bp->Run();
  


    return 0;
}