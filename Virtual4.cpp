#include<iostream>
using namespace std;

class base 
{
   public:
   int i,j,k;
  virtual void Fun()
{ cout<<"Inside Base Fun\n";}
   void Sun()
{ cout<<"Inside Base Sun\n";}
  virtual void Gun()
{ cout<<"Inside Base Gun\n";}
   void Run()
{ cout<<"Inside Base Run\n";}

};

class Derived : public base
{
  public:
   int a,b;
  virtual void Gun()
   {  cout<<"Inside derived gun\n"; }
   void Run()
    {  cout<<"Inside derived Run\n"; }
    void Mun()
    {  cout<<"Inside derived Run\n";  }

   
};

int main()
{

  cout<<sizeof(base)<<"\n";
  cout<<sizeof(Derived)<<"\n";
  base *bp = new base;
  bp->Fun();
  bp->Gun();
  bp->Sun();
  bp->Run();
  bp->Mun();


    return 0;
}