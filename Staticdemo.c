#include<stdio.h>

void Fun()
{
   auto  int i = 10;
    i++;
    printf("%d\n",i);
}
int main()
{
   Fun();
   Fun();
   Fun();

    return 0;
}