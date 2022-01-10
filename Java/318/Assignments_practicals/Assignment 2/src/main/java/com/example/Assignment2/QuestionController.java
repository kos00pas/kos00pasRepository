package com.example.Assignment2;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.servlet.view.RedirectView;

import java.util.HashSet;

@RestController
public class QuestionController {

    @Autowired
    private QuestionRepository repositoryKnow;
    @Autowired
    private OldRepository repositoryOld ;
    @Autowired
    private SaveRepository repositorySaveAnswer;

    @GetMapping("/ldQuestions")
    public Iterable<Old> getyourOldQuestions(){
        return repositoryOld.findAll();
    }

    @GetMapping("/yourSaveAnswers")
    public Iterable<Save> getyourSaveAnswers(){
        return repositorySaveAnswer.findAll();
    }

    @GetMapping("/knowledgeBaseList")
    public Iterable<Question> getknowledgeBase(){    return repositoryKnow.findAll();   }

    @GetMapping("/knowledgeBase")
    public RedirectView  addInknowledgeBase(@RequestParam   final  String answer ,  String  keywords ){
        Question newQuestion = new Question();

        newQuestion.setAnswer(answer);
        newQuestion.setKeywords(keywords);
        repositoryKnow.save(newQuestion);
        return new RedirectView("");
    }

    @GetMapping("/deleteKnowQuestion")
    public RedirectView deleteknowledgeBase(@RequestParam Integer id) {
        repositoryKnow.deleteById(id);
        return new RedirectView("");
    }

    @GetMapping("/askMe")
    public RedirectView findQuestion(@RequestParam  String question ) {
        Question xristiQuestion = new Question();
        xristiQuestion.setQuestion(question);

        Save apantisi = new Save();
        repositorySaveAnswer.deleteAll();

        Old xristiOldQuestion = new Old();
        xristiOldQuestion.setOldQuestion(question);
        repositoryOld.save(xristiOldQuestion);

        for (Question q : repositoryKnow.findAll()) {
            int c = 0;

            String[] keysArray = q.getKeywords().split(" ");

            for (String h : keysArray) {
                if (question.contains(h)) {
                    c++;

                }
            }
            if (c == keysArray.length) {

                apantisi.setSaveAnswer(q.getAnswer());
                repositorySaveAnswer.save(apantisi);
                System.out.println("vrika oti iparxi i apantisi ");
                return new RedirectView("/apantisi.html");

            }
        }
            apantisi.setSaveAnswer("den iparxi apantisi ");
            repositorySaveAnswer.save(apantisi);

        return new RedirectView("/apantisi.html");

    }



}





