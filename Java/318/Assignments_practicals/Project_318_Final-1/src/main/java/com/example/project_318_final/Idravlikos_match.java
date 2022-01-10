package com.example.project_318_final;


import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

@Entity
public class Idravlikos_match  {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private Integer idMatchspecific;//Autowiard

    private Integer idMatchRepository;
    private Integer idPelati;
    private String namePelatiMatch;
    private String emailPelatiMatch;
    private String topothesiaPelatiMatch;
    private Integer epilogiTexnikouMatch;
    private String perigrafi;

    private String nameTexnikouMatch;
    private String emailTexnikouMatch;
    private String topothesiaTexnikouMatch;
    private Integer epilogiTexnikou_apoTexnikoMatch;

    public void setidMatchspecific(Integer idMatchspecific) {
        this.idMatchspecific = idMatchspecific;
    }
    public Integer getidMatchspecific() {
        return idMatchspecific;
    }

    public void setidMatchRepository(Integer idMatchRepository) {
        this.idMatchRepository = idMatchRepository;
    }
    public Integer getidMatchRepository() {
        return idMatchRepository;
    }

    public void setidPelati(Integer idPelati) {
        this.idPelati = idPelati;
    }
    public Integer getidPelati() {
        return idPelati;
    }
    //---------------------------------------------------------------------------

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

    public String getNameTexnikouMatch() {
        return nameTexnikouMatch;
    }
    public void setNameTexnikouMatch(String nameTexnikouMatch) {
        this.nameTexnikouMatch = nameTexnikouMatch;
    }

    public String getEmailTexnikouMatch() {
        return emailTexnikouMatch;
    }
    public void setEmailTexnikouMatch(String emailTexnikouMatch) {
        this.emailTexnikouMatch = emailTexnikouMatch;
    }

    public String getTopothesiaTexnikouMatch() {
        return topothesiaTexnikouMatch;
    }
    public void setTopothesiaTexnikouMatch(String topothesiaTexnikouMatch) {this.topothesiaTexnikouMatch = topothesiaTexnikouMatch;   }

    public void setEpilogiTexnikou_apoTexnikoMatch(Integer epilogiTexnikou_apoTexnikoMatch) {this.epilogiTexnikou_apoTexnikoMatch = epilogiTexnikou_apoTexnikoMatch;  }
    public Integer getEpilogiTexnikou_apoTexnikoMatch() {
        return epilogiTexnikou_apoTexnikoMatch;
    }

}
