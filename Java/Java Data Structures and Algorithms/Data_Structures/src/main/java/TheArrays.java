import java.util.Arrays;

public class TheArrays {
    public static void main(String[] args ){
         String[] colors = { "black" ,"brown","red", "orenge","yellow ",
                 "green " , "blue", "purple","grey","white"};

        /*1*/
        System.out.println(Arrays.toString(colors));
        /*2*/
        for(String i : colors)
             System.out.print(i);
/*_ */                                                                                  System.out.println();
        /*3*/
        for (int i=0 ;i< colors.length;i++ )
            System.out.print(colors[i]);
/*_ */                                                                                  System.out.println();
        /*4*/
        Arrays.stream(colors).forEach(System.out::print);



    }
}
