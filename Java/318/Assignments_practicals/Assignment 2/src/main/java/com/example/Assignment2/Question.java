package com.example.Assignment2;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

@Entity
public class Question {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private Integer id;

    private String question ;
    private String answer ;
    private String  keywords ;

            public Integer getId() {
                return id;
            }
            public void setId(Integer id) {
                this.id = id;
            }
            public String getQuestion(){
                        return question;
                    }
            public void setQuestion(String question){
        this.question=question;
            }
            public String getAnswer() {
                return answer;
            }
            public void setAnswer(String answer) {
                this.answer = answer;
            }
            public String getKeywords() {
                return keywords;
            }
            public void setKeywords(String keywords) {
                this.keywords = keywords;
            }       }
