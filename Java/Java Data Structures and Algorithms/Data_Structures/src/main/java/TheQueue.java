import java.util.LinkedList;
import java.util.Queue;

public class TheQueue {
    public static void main(String[] args) {
       /*
        Queue<Person> supermarket = new LinkedList<>();
        supermarket.add(new Person("alex" , "21"));
        supermarket.add(new Person("dem" , "21"));
        supermarket.add(new Person("zack" , "21"));

        */
        Queue<String> supermarket = new LinkedList<>();
        supermarket.add("alex");
        supermarket.add("dem");
        supermarket.add("zack");

        System.out.println(supermarket.size());
        System.out.println(supermarket.peek());
        System.out.println(supermarket.poll());
        System.out.println(supermarket.size());

    }
}
/*
    static record Person(String name, int age  )

}

 */
