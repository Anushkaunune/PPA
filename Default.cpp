#include<iostream>
using namespace std;

float Calaculaton(int arks, int Outof = 100)
{
    float percentage = ((Marks / Outof) * 100);
    return percentage;
}
int main()
{
    float Ans = 0.0f;

    Ans = Calaculation(86,100);
    cout<<"percentage :"<<Ans<<"\n";

    Ans = Calaculation(86);
    cout<<"percentage :"<<Ans<<"\n";

    Ans = Calaculation(320,400);
    cout<<"percentage :"<<Ans<<"\n";

    return 0;
}