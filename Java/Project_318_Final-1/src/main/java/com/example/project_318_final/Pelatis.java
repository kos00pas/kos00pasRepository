package com.example.project_318_final;


import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

@Entity
public class Pelatis {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private Integer id;

    private String namePelati;
    private String emailPelati;
    private String topothesiaPelati;
    private Integer epilogiTexnikou;
    private String perigrafi;

    public void setId(Integer id) {
        this.id = id;
    }
    public Integer getId() {
        return id;
    }

    public String getEmailPelati() {
        return emailPelati;
    }
    public void setEmailPelati(String emailPelati) {
        this.emailPelati = emailPelati;
    }

    public String getNamePelati() {
        return namePelati;
    }
    public void setNamePelati(String namePelati) {
        this.namePelati = namePelati;
    }

    public String getTopothesiaPelati() {
        return topothesiaPelati;
    }
    public void setTopothesiaPelati(String topothesiaPelati) {
        this.topothesiaPelati = topothesiaPelati;
    }

    public void setEpilogiTexnikou(Integer epilogiTexnikou) {
        this.epilogiTexnikou = epilogiTexnikou;
    }
    public Integer getEpilogiTexnikou() {   return epilogiTexnikou;    }

    public String getPerigrafi() {
        return perigrafi;
    }
    public void setPerigrafi(String perigrafi) {
        this.perigrafi = perigrafi;
    }
}
