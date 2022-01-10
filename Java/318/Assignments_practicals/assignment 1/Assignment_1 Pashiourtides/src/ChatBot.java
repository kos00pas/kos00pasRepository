import java.awt.*;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class ChatBot {
    String name;
    Set<Question> questions = new HashSet<>();

    public ChatBot(String name) {
        this.name = name;
    }


    public void readQuestionsfromFile(String path)  {

            File myf = new File(path);
            try{
                Scanner scanner = new Scanner(myf);
                    while(scanner.hasNextLine()){
                        String grammi = scanner.nextLine();
                        String[] splitted = grammi.split("-");

                        String [] keywords_of_file = splitted[1].split(",");

                        addQuestion(splitted[0],splitted[2],keywords_of_file);

                    }
            }
            catch(FileNotFoundException e){
                System.out.println("epiasa exeption");
            }
    }

    public void addQuestion(String id, String answer, String[] keywords) {
        questions.add(new Question(id, answer, keywords)); //add parameters
    }

    public String answerQuestion(String question) {
            int d=0,v=0 , c = 0 ;

            for(Question o: questions){
                c=0 ;
                for(String h: o.keywords){
                    if (question.contains(h)){
                        c++;
                        d=1;
                    }
                }
                if (c==o.keywords.length){
                    v=1;
                    return o.answer ;
                }

            }
                return "eje kserw ta panta re koumpare ";
    }
}