package com.example.Assignment2;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;


@Entity
public class Save {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
   private Integer id;

private String answer;

    public Integer getSaveId() {
        return id;
    }

    public void setSaveId(Integer id) {
        this.id = id;
    }

    public String getSaveAnswer() {
        return answer;
    }

    public void setSaveAnswer(String answer) {
        this.answer = answer;
    }
}