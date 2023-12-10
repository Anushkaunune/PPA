#include<iostream>
using namespace std;

class Demo
{
    public:
       int i;
       int j;
       int k;

       Demo(int a = 10, int b = 20, int c = 30)
       {
        i = a;
        j = b;
        k = c;
       }

    void Fun (int No1, int No2)
    {
        cout<<"Inside Fun\n";
        cout<<"Value of i"i<<"\n";
        cout<<"Value of j"j<<"\n";
        cout<<"Value of k"k<<"\n";
        
    
    }

};

int main()
{
  Demo obj1;
  Demo obj2(11,21,41);

  obj1.Fun(5,6);
  obj2.Fun(8,9);

  obj1.Display();
  obj2.Display();
  
  cout<<"Address of obj1 is "<<&obj1<<"\n";
  obj1.Display();
  cout<<"Address of obj2 is "<<&obj2<<"\n";
  obj1.Display();
    return 0;
}