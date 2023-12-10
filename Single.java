class Base
{
  public int A,B;
  public Base()
  {
    System.out.println("Base Constructor");
  }
  public void fun()
  {
    System.out.println("Derived fun");
  }
}

class Derived extends Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived Constructor");
    }
    public void gun()
    {
        System.out.println("Derived gun");
    }
}

class Single
{
    public static void main(Strind arg[])
    {
       Derived dobj = new Derived();
       dobj.fun();
       dobj.gun();
    }
}