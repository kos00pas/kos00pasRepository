
public class Main {

    public static void main(String[] args) {
        // write your code here
        ShowProcessors.show();
    }
}
class ShowProcessors{

    public static void show(){
        System.out.println(Runtime.getRuntime().availableProcessors());
    }
}