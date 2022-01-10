import java.util.ArrayList;
import java.util.List;

public class TheList {
    public static void main(String[] args){
        List<String> colors = new ArrayList<>();
        colors.add("purple");
        colors.add("blue");
        colors.add("yellow");

    System.out.println(colors.size());
    System.out.println(colors.contains("blue"));
/*_*/                                                                System.out.println();
        /*1*/
    System.out.println(colors);
     /*2*/
    for(String i :colors )
        System.out.print(i);
/*_*/                                                                System.out.println();
    /*3*/
        colors.forEach(System.out::print);
/*_*/                                                                System.out.println();
    /*4*/
    for(int i =0 ; i<colors.size();i++)
        System.out.print(colors.get(i));
    
    }
}
