import java.util.HashMap;
import java.util.Map;

public class TheMap {
    public static void main(String[] args){
        Map<Integer, String> map = new HashMap<>();
        map.put(1, "Alex");
        map.put(2, "Alexander");
        map.put(3, "zack");
        map.put(3, "zack");
        System.out.println(map);
        System.out.println(map.size());
        System.out.println(map.get(2));
        System.out.println(map.containsKey(6));
        System.out.println(map.keySet());
        System.out.println(map.entrySet());
/*_*/                                                                                                                   System.out.println();
        map.entrySet().forEach(System.out::print);
        map.remove(2);
/*_*/                                                                                                                   System.out.println();
        map.entrySet().forEach(x -> System.out.print(x.getKey()+" "+x.getValue()));
 /*_*/                                                                                                                   System.out.println();
        map.forEach((key,String)-> {
            System.out.print(key+"-"+String);
                                    });
//--------------------------------------------------------------------------------------
/*_*/                                                                                                                   System.out.println();
        Map<Integer, Person> mappp = new HashMap<>();
        mappp.put(1,new Person("xanax"));
        mappp.put(2,new Person("zoloft"));
        mappp.put(3,new Person("efexor"));
        mappp.entrySet().forEach(x -> System.out.print(x.getKey() + " " + x.getValue().name));


    }
}


 class Person{
    String name;
    public Person( String name ){
        this.name=name;
    }
}