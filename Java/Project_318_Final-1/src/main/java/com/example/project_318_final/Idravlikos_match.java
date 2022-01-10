package com.example.project_318_final;


import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

@Entity
public class Idravlikos_match extends Match {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private Integer idMatchspecific;//Autowiard

    public void setidMatchspecific(Integer idMatchspecific) {
        this.idMatchspecific = idMatchspecific;
    }
    public Integer getidMatchspecific() {
        return idMatchspecific;
    }


}
