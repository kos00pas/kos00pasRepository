package com.UCY;

public class Dog {

    String color = "white";
    String breed = "husky";
    String name = "Vaggelis";
    String surname = new String("Georgiou "); //same thing as the previews line
    int age = 4;
    String fav_game = "stick";

    public void bark() {
        System.out.println("gav gav");
    }

    public Dog() {
    }

    public Dog(String dogname) {
        name = dogname;
    }

    public Dog(String dogname, String dogbreed, int dogage) {
        name = dogname;
        breed = dogbreed;
        age = dogage;
    }

    public void sleep() {
        System.out.println("zzz zzz");
    }

    public String sleep2() {
        return ("zzz zzz ");
    }

    public String sleep3() {
        String sleeping = "sleeping";
        return sleeping;
    }
}
