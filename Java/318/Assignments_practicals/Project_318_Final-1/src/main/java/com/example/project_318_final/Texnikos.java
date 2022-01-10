package com.example.project_318_final;


import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

@Entity
public class Texnikos {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private Integer id;

    private String nameTexnikou;
    private String emailTexnikou;
    private String topothesiaTexnikou;
    private Integer epilogiTexnikou_apotexniko;

    public Integer getId() {
        return id;
    }
    public void setId(Integer id) {
        this.id = id;
    }

    public String getNameTexnikou() {
        return nameTexnikou;
    }
    public void setNameTexnikou(String nameTexnikou) {
        this.nameTexnikou = nameTexnikou;
    }

    public String getEmailTexnikou() {
        return emailTexnikou;
    }
    public void setEmailTexnikou(String emailTexnikou) {
        this.emailTexnikou = emailTexnikou;
    }

    public String getTopothesiaTexnikou() {
        return topothesiaTexnikou;
    }
    public void setTopothesiaTexnikou(String topothesiaTexnikou) {
        this.topothesiaTexnikou = topothesiaTexnikou;
    }

    public void setEpilogiTexnikou_apotexniko(Integer epilogiTexnikou_apotexniko) {
        this.epilogiTexnikou_apotexniko = epilogiTexnikou_apotexniko;
    }
    public Integer getEpilogiTexnikou_apotexniko(){return epilogiTexnikou_apotexniko;}



}
