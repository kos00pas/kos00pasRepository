import java.util.Stack;

public class TheStack {
    public static void main(String[] args){
        Stack<String> stack =new Stack<>();

        stack.push("a");         stack.push("b" );         stack.push("c" );
        System.out.println(stack.size());
        System.out.println(stack.empty());
/*_*/                                                                System.out.println();
        /*1*/
        System.out.println(stack.peek());// it's not remove
        System.out.println(stack);

/*_*/                                                                System.out.println();
        /*2*/
        System.out.println(stack.pop());//remove
        System.out.println(stack);

    }
}
