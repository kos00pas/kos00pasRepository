import java.util.HashSet;
import java.util.Set;

public class Main {

    public static void main(String[] args)
    {
        System.out.println("Hello World!");

        Set<Question> questionSet = new HashSet<Question>();

        String stringofKeywords = "k1,k2,k3";
        String [] keywords = stringofKeywords.split(",");

        for(int i=0; i<keywords.length; i++){

            System.out.println(keywords[i]);

        }


        Question question1 = new Question(1, "this the answer", keywords );
        questionSet.add(question1);


       Question[ ] questions = (Question[]) questionSet.toArray();


        for(int j=0; j<questions.length; j++){
           System.out.print(questions[j].id + " --- " +  questions[j].answer + " --- ");
        }
        /*
        Set<String> keywords2 = new HashSet<String>();
        keywords2.add("keyword2 proto");
        keywords2.add("keyword2 deutero");

        Question question2 = new Question(2, " second answer", keywords2);
        questionSet.add(question2);


        */
        int i=0;
        for(Question q: questionSet){
            System.out.print(q.id + " --- " +  q.answer + " --- ");
            System.out.print("The keywords are: ");
            for(String k : q.keywords) {
                System.out.print(k + ",");
            }
            System.out.println();
            i++;

        }

        Object [] questionsarray = questionSet.toArray();
        for (Object o :questionsarray){
            System.out.print(((Question)o).id);
        }
    }
}
