public class Main {

    public static void main(String[] args) {
        System.out.println("Hello World!");

        Dog vaggelisdog = new Dog("vagelis");

        vaggelisdog.bark();
        System.out.print("My dog name is " + vaggelisdog.name + "\n");
        System.out.println("My dog is " + vaggelisdog.age + " years old");

        vaggelisdog.name = "Dhmokritos";
        System.out.print("My dog name is " + vaggelisdog.name + "\n");


        Dog mariadog = new Dog(" Zampulos");

        System.out.print("Maria's dog name is " + mariadog.name + "\n");
        System.out.print("Maria's dog surname is " + mariadog.surname + "\n");

        Dog anna = new Dog("Anna", "husky", 2);

        System.out.println("Anna's dog name is " + anna.name + " " + anna.surname + " and she is " + anna.age + " years old");
        anna.bark();

        String sleeping = anna.sleep();
        System.out.println(sleeping);

        System.out.println(anna.sleep());

        Dog mydog = new Dog();
        System.out.println(mydog.name);

    }
}
