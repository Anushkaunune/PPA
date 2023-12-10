import java.util.*;

class Collection1
{
    public static void main(String rg[])
    {
       Hashtable<String ,Integer> hobj = new  Hashtable<String ,Integer>();

       hobj.put("PPA",19500);
       hobj.put("LB",19700);
       hobj.put("Angulr",19000);
       hobj.put("Python",20500);

       System.out.println(hobj.get("Python"));

       Enumeration eobj = hobj.key();
       while(eobj.hashMoreelements)
    }

    
}