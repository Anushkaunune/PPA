
class Marvellous
{
    public int i;
    public int j;

    public Marvellous()
    {
       System.out.println("Inside default constructer");
       this.i = 0;
       this.j = 0;
    }

    public Marvellous(int a, int b)
    {
       System.out.println("Inside paramertrised constructer");
       this.i = a;
       this.j = b;
    }

    public void Fun()
    {
        System.out.println("Inside Fun method");
    }
}



class ClassDemo
{
    public static void main (String Arg[])
    {
        System.out.println("Inside main");

        Marvellous mobj1 = new Marvellous();
        Marvellous mobj2 = new Marvellous(12,9);

        System.out.println(mobj1.i);
        System.out.println(mobj2.i);

        mobj2.Fun();
    }
}