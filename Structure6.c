#include<stdio.h>

struct Hello
{
int i;
float f;

 {
    int no;
    float d;
    struct Hello 9
 }hobj;


}dobj;

int main()
{
  dobj.i = 11;
  dobj.f = 90.99;

  dobj.hobj.no = 21;
  dobj.hobj.d = 90.88;

  printf("size of object is : %d\n",sizeof(dobj));



    return 0;
}