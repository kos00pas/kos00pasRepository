

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        ChatBot botaki = new ChatBot("Chatbot");
        System.out.println("Hello! my name is" + botaki.name);
        System.out.println("What is your name?");
        Scanner scanner = new Scanner(System.in);
        String user = scanner.nextLine();
        System.out.println("Hello " + user );
        botaki.readQuestionsfromFile("questions.txt");
        Scanner erwtisi_xristi = new Scanner(System.in);

        int c=0;
        while(c==0){
            System.out.println("Dwse mou erwtisi ή 0 gia eksodo  ");
            String apantisi = botaki.answerQuestion(erwtisi_xristi.nextLine());
            System.out.println(apantisi);
            if (erwtisi_xristi.equals("0")){
                break;
            }
        }   }
}
