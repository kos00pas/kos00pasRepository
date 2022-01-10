package com.example.demo_before_practical3;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

@Entity
public class Friend {
  @Id
  @GeneratedValue(strategy = GenerationType.AUTO)// kamnei generate me vasi to apokato tou (id) einai unic , einai to key sou
    Integer id ;
    private String name;
    private String surname;
    private Integer age;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getSurname() {
        return surname;
    }

    public void setSurname(String surname) {
        this.surname = surname;
    }

    public Integer getAge() {
        return age;
    }

    public void setAge(Integer age) {
        this.age = age;
    }
}
