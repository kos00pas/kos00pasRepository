import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        /// System.out.println("Hello World!");

        Animal animal = new Animal("animal", "blue", 7);
        Animal animal1 = new Animal("animal", "blue", 7);

        animal1 = animal;

        animal.speak("hello");

        Dino dino = new Dino("dinosavros", "pink");
        dino.speak("hello I am the dino");

        animal.speakFromFile("files/sound1.txt");

        Animal zooarray[] = new Animal[20];
        for (int i = 0; i <= 19; i++) {
            zooarray[i] = new Animal("animal" + i, "blue", 7);
        }
        zooarray[0].speak("hello");

        //

        ArrayList<Animal> zoo = new ArrayList<>();
        File file = new File("files/animals.txt");


        try {
            Scanner scanner = new Scanner(file);
            String line = "";
            while (scanner.hasNext()) {
                line = scanner.nextLine();
                zoo.add(new Dino(line, "black"));
            }
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }

        System.out.println(zoo.size());

        for (Animal a : zoo) {
            System.out.println(a.name);
        }

        System.out.println("the second animal in this array is the " + zoo.get(1).name);


    }
}
