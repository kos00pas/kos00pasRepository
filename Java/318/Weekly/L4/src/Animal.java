import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Scanner;

public class Animal {
    int numOfFeet;
    String name;
    String color;

    public Animal(String onoma, String color, int numOfFeet) {
        name = onoma;
        this.color = color;
        this.numOfFeet = numOfFeet;
    }

    public void speak(String sound) {
        System.out.println(sound);
    }

    public void speakFromFile(String filename) {
        try {
            File file = new File(filename);

            Scanner scanner = new Scanner(file);
            String line = "";
            while (scanner.hasNext()) {
                line += scanner.nextLine();
                System.out.println(line);
            }
        } catch (FileNotFoundException exception) {
            System.out.println(exception.getClass().getName());
            System.out.println("I got an exception");
        }

    }


}
