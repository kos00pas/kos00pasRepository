package com.UCY;

public class Main {

    public static void main(String[] args) {

        Dog vaggelisdog = new Dog();

        vaggelisdog.bark();
        System.out.println("My dog's name is " + vaggelisdog.name);
        System.out.println("My dog's age is " + vaggelisdog.age);
        vaggelisdog.name = "Dimos";
        System.out.println("My dog's name is " + vaggelisdog.name);
        System.out.println("My dog's surname is " + vaggelisdog.surname);

        Dog mariadog = new Dog("Zakis");
        Dog anna = new Dog("Anna", "husky", 2);
        System.out.println("\n" + "Anna's dog name is " + anna.name + " and its surname is " + anna.surname + "and she is " + anna.age + " years old ");

        anna.sleep();

        String sleeping = anna.sleep2();
        System.out.println(sleeping);

        System.out.println(anna.sleep3());
    }
}
