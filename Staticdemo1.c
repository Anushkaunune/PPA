#include<stdio.h>

void Fun()
{
   static int i = 10;
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