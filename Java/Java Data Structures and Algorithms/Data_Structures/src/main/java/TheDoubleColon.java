interface Bike{
    public String getName();
}
class Engine{
    Engine(){System.out.println("Engine-> creation");    }
}
interface NewBike{
    public Engine getEngine();
}

public class TheDoubleColon {

            public static void main(String[] args){
               //Give the name here
                Bike bike1 = () -> "Honda";
                System.out.println(bike1.getName());

                //Static method
                //Classname::methodName
                Bike bike2= TheDoubleColon::printName;
                System.out.println(bike2.getName());

                //Non static
                //ObjectReference::methodName
                TheDoubleColon dc =new TheDoubleColon();
                Bike bike3 = dc::displayName;
                System.out.println(bike3.getName());

                //Constructor
                //className::new
                NewBike bike4 = Engine::new;
                bike4.getEngine();

            }

    public static String printName(){
        return "static method";
    }

    public String displayName(){
        return "non static method";
    }
}
