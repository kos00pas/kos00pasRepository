import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        // File fileonomata = new File("katiallo.txt");
        System.out.println("Please enter the name of the file ");
        try {
            Scanner readinput = new Scanner(System.in);
            diavaseFile(readinput.nextLine());
        } catch (FileNotFoundException e) {
            System.out.println("epiasa exception");
        }

        try {
            Scanner readfile = new Scanner(fileonomata);
            System.out.println(" file found ");

        } catch (FileNotFoundException ekseresi) {
            System.out.println(" file not found!!! ");
            System.out.println(ekseresi.getMessage());
            // e.printStackTrace();
        }
        System.out.println(" end of program ");

        Paradigma 1 **
        System.out.println("Hello World! What is your address?");
        Scanner eisodos = new Scanner(System.in);
        //String diefthinsi =  eisodos.nextLine();
        String diefthinsitrimmied = eisodos.nextLine().trim();


        while (diefthinsitrimmied.isEmpty()) {
            System.out.println("Please enter address?");
            diefthinsitrimmied = eisodos.nextLine().trim();
        }


        //System.out.println("Length without trim: " +diefthinsi.length());
        //System.out.println("Length with trim: " +diefthinsi.trim().length());

        //System.out.println("isEmpty without trim: " +diefthinsi.isEmpty());
        //System.out.println("isEmpty with trim: " +diefthinsi.trim().isEmpty());

        System.out.println("Your address is " + diefthinsitrimmied + "\n");

        System.out.println("What is your name?");

        String name = eisodos.nextLine();
        System.out.println("Hello " + name + "\n");


    }


    public static void diavaseFile(String path) throws FileNotFoundException {
        File myfile = new File(path);
        Scanner myscanner = new Scanner(myfile);

        while (myscanner.hasNextLine()) {
            System.out.println(myscanner.nextLine());
        }


    }
}
