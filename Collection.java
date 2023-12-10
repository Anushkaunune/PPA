import java.util.*;

class Collection
{
    public static void main(String rg[])
    {
       LinkedList <Integer> lobj = new LinkedList<Integer>();


       lobj.add(10);
       lobj.add(30);
       lobj.add(33);
       
        System.out.println(lobj);
        lobj.addFirst(9);
        System.out.println(lobj);

         if(lobj.contains(30))
         {
          System.out.println("LL contains 30 in it");
         }
         else
         {
            System.out.println("There is no contains 30 in it");
         }
         {
            System.out.println("There is no contains 30 in it");
            Iterator iobj = lobj.iterator();
            while(iobj.hasNext())
            {
                System.out.println(iobj.next());
            }

         }

    }
}