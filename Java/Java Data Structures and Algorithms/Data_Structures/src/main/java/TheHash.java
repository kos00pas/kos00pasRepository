import java.util.HashMap;
import java.util.Map;
import java.util.Objects;

public class TheHash {
    public static void main(String[] args){
        Map<Personn, Diamond> mappp = new HashMap<>();
        mappp.put(new Personn("xanx"),new Diamond("Africand diamond"));
        mappp.put(new Personn("zoloft"),new Diamond("Asian diamond"));
        mappp.put(new Personn("efexor"),new Diamond("Europe diamond"));
        mappp.entrySet().forEach(x -> System.out.println(x.getKey().name + " " + x.getValue().name));
       System.out.println(new Personn("xanx").hashCode());
        System.out.println(mappp.get(new Personn("xanx")).name);

    }
}


class Personn {
    String name;

    public Personn(String name) {
        this.name = name;
    }


    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Personn personn = (Personn) o;
        return Objects.equals(name, personn.name);
    }

    @Override
    public int hashCode() {
        return Objects.hash(name);
    }
}
class Diamond{
    String name;
    public Diamond( String name ){
        this.name=name;
    }
}