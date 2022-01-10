import java.util.LinkedList;
import java.util.ListIterator;
import java.util.Queue;

public class TheLinkedList {
    public static void main(String[] args){
        LinkedList<String> linkedList = new LinkedList<>();
        linkedList.add("maria");
        linkedList.add("louiza");
        linkedList.add("tonia");
        linkedList.add("kiriakos");
        linkedList.add("costas");
        ListIterator<String>  stringListIterator=linkedList.listIterator();

        while(stringListIterator.hasNext()){
            System.out.println(stringListIterator.next());
         }
/*_*/                                                                                                           System.out.println();
         while(stringListIterator.hasPrevious()) {
             System.out.println(stringListIterator.previous());
         }
}


    private static void queues(){
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
