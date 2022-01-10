import java.util.Enumeration;
import java.util.Vector;

public class TheVector {
    public static void main(String[] arg){
        Vector vector=new Vector();

        vector.add(5);
        vector.add(6);
        vector.add(7);
        vector.add(8);
        vector.add("Hello");
        vector.add(new Object());
        /*1*/
        System.out.print(vector);
 /*_*/                                                                System.out.println();
        /*2*/
        System.out.print(vector.get(0));
        System.out.print(vector.get(1));
        System.out.print(vector.get(2));
        System.out.print(vector.get(3));
        System.out.print(" "+vector.get(4));
        System.out.print(" "+vector.get(5));
/*_*/                                                                System.out.println();
        /*3*/
        Enumeration e = vector.elements();
        while(e.hasMoreElements())
            System.out.print(" "+e.nextElement());
    }
}
