package com.example.project_318_final;


import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

@Entity
public class Match extends Texnikos {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private Integer idMatch;

    private Integer idPelati;
    private String namePelatiMatch;
    private String emailPelatiMatch;
    private String topothesiaPelatiMatch;
    private Integer epilogiTexnikouMatch;

    private String perigrafi;


    public void setIdMatch(Integer idMatch) {
        this.idMatch = idMatch;
    }
    public Integer getIdMatch() {
        return idMatch;
    }
    //---------------------------------------------------------------------------
    public void setidPelati(Integer idPelati) {
        this.idPelati = idPelati;
    }
    public Integer getidPelati() {
        return idPelati;
    }

    //------------------------------------------
    public String getNamePelatiMatch() {
        return namePelatiMatch;
    }
    public void setNamePelatiMatch(String namePelatiMatch) {
        this.namePelatiMatch = namePelatiMatch;
    }

    public String getEmailPelatiMatch() {
        return emailPelatiMatch;
    }
    public void setEmailPelatiMatch(String emailPelatiMatch) {
        this.emailPelatiMatch = emailPelatiMatch;
    }

    public String getTopothesiaPelatiMatch() {
        return topothesiaPelatiMatch;
    }
    public void setTopothesiaPelatiMatch(String topothesiaPelatiMatch) {this.topothesiaPelatiMatch = topothesiaPelatiMatch;   }

    public void setEpilogiTexnikouMatch(Integer epilogiTexnikouMatch) {this.epilogiTexnikouMatch = epilogiTexnikouMatch;  }
    public Integer getEpilogiTexnikouMatch() {
        return epilogiTexnikouMatch;
    }

    public String getPerigrafiMatch() {
        return perigrafi;
    }
    public void setPerigrafiMatch(String perigrafi) {
        this.perigrafi = perigrafi;
    }
    //---------------------------------------------------------------------------


}
