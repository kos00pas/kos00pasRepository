package com.example.Assignment2;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

@Entity
public class Old {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private Integer id;
    private String old  ;

    public Integer getOldId() {
                        return id;
    }
    public void setOldId(Integer id) {
        this.id = id;
    }
    public String getOldQuestion() {
        return old;
    }
    public void setOldQuestion(String question) {
        this.old = question;
    }
}
