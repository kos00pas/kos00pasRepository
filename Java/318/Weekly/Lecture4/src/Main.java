import java.util.ArrayList;
import java.util.Stack;

public class Main {

    public static void main(String[] args) {
        System.out.println("Hello World!");

        list example
        String xelwna = "xelwna";
        ArrayList<String> mylist = new ArrayList<String>();
        mylist.add(xelwna);
        mylist.add("skilaki");
        mylist.add("alogo");
        // String[] listarray = (String []) mylist.toArray();
        for (int i = 0; i < mylist.size(); i++) {
            System.out.println(mylist.get(i));
        }
        mylist.remove(xelwna);
        System.out.println("-----------");
        for (String animal : mylist) {
            System.out.println(animal);
        }
         */

        Stack<String> luludia = new Stack<String>();

        luludia.push("tritantafilo");
        luludia.push("tulippa");
        luludia.push("margarita");
        //luludia.pop();
        System.out.println("--- " + luludia.size());
        //  System.out.println(luludia.peek());

        for (String luludaki : luludia) {
            System.out.println(luludaki);
        }


    }
}
