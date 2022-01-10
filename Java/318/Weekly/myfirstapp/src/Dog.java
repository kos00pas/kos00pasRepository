public class Dog {

    String color = " ";
    String breed = "Husky";
    String name = "Vaggelis";
    String surname = new String(" Georgiou");
    int age = 4;
    String fav_game = "stick";

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

    public void bark() {
        System.out.println("gav gav");
    }

    public String sleep() {

        String slepping = "zzz zzz";

        return slepping;
    }
}

